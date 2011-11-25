#include <iostream>
#include <list>

#include "Taxi.h"
#include "Limo.h"
#include "Vehicle.h"

class Car_Park
{
	private:
		std::list<Vehicle *> parked;
		int max_parked;
	public:
		Car_Park(int parking_spaces);
		~Car_Park();
		void park(Vehicle *park_this_car);
		void unpark(std::string reg_number);
		void print(std::ostream& os) const;
};
