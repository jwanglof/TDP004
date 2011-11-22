#include <iostream>

#include "Vehicle.h"
#include "Taxi.h"

int main() {
	std::cout << "Number of objects: " << Vehicle::get_number_of_objects()
			<< std::endl << std::endl;

	Vehicle *vehicle = new Vehicle("B3A2", "blue", 4);
	Taxi *taxi = new Taxi("B3A1");

	std::cout << "Created two vehicles." << std::endl << std::endl;
	std::cout << "Number of objects: " << Vehicle::get_number_of_objects()
			<< std::endl << std::endl;

	std::cout << *vehicle << std::endl;
	std::cout << *taxi << std::endl;

	std::cout << "Taxi picked up a customer." << std::endl << std::endl;
	taxi->set_has_customers(true);

	std::cout << *taxi << std::endl;

	delete vehicle;
	delete taxi;

	std::cout << "Deleted two vehicles." << std::endl << std::endl;
	std::cout << "Number of objects: " << Vehicle::get_number_of_objects()
			<< std::endl;

	return 0;
}
