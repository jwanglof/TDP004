#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Robot 
{
	private:
		string name;
		bool running;
		bool is_running();
	public:
		Robot(string name);
		void start();
		void stop();
};

Robot::Robot(string new_name) {
	name = new_name;
	running = false;
}

void Robot::start() {
	if (running == false) {
		running = true;
		cout << "Starting <" << name << ">" << endl;
	}
	else {
		cout << "<" << name << ">: Stop poking me!" << endl;
	}
}

void Robot::stop() {
	if (running == true) {
		running = false;
		cout << "<" << name << "> stopped" << endl;
	}
	else {
		cout << "<" << name << ">: ZzzZzZzZZ!" << endl;
	}
}

bool Robot::is_running() {
	return running;
}

int main(int argc, char *argv[])
{
	Robot r1("Andrew");

	srand(time(0));

	for (int i = 0; i < 10; i++) {
		cout << i+1 << " ";
		if (rand() % 2 == 1)
			r1.start();
		else 
			r1.stop();
	}

	r1.stop();

	return 0;
}
