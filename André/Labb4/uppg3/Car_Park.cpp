#include "Car_Park.h"

/*
class Car_Park
{
	private:
		list<Vehicle *> parked;
		int max_parked;
	public:
		Car_Park(int parking_spaces);
		~Car_Park();
		void park(Vehicle *);
		void unpark(String reg_number);
}
*/

Car_Park::Car_Park(int parking_spaces) : max_parked(parking_spaces)
{ }

Car_Park::~Car_Park()
{ }

void Car_Park::park(Vehicle *park_this_car)
{
	if (parked.size() < max_parked) {
		parked.push_back(park_this_car);
		std::cout << "Parked a " << *park_this_car << std::endl;
	}
	else
		std::cout << "Not enough room for a " << *park_this_car << std::endl;
}

void Car_Park::unpark(std::string reg_number)
{
	std::list<Vehicle *>::iterator parked_iterator = parked.begin();

	for (; parked_iterator != parked.end(); parked_iterator++)
		if ((*parked_iterator)->get_reg_number() == reg_number) {
			parked_iterator = parked.erase(parked_iterator);
			std::cout << reg_number << " left the carpark." << std::endl;
		}
}

void Car_Park::print(std::ostream& os) const
{ 
	os << "The following vehicles are in the carpark: " << std::endl;
	
	std::list<Vehicle *>::const_iterator parked_iterator = parked.begin();

	for (; parked_iterator != parked.end(); parked_iterator++) {
		(*parked_iterator)->print(os);
		os << std::endl;
	}
}
