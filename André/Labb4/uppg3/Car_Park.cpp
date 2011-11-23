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
	std::cout << " left the carpark." << std::endl;
}

void Car_Park::print(std::ostream& os) const
{ 
	os << "The following vehicles are in the carpark: " << std::endl;
	
	std::list<Vehicle *>::iterator it;

}

Car_Park& Car_Park::operator= (const Car_Park &cSource)
{
	// do the copy
	parked = cSource.parked;

	// return the existing object
	return *this;
}
