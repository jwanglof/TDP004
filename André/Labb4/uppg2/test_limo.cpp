#include <iostream>

#include "Taxi.h"
#include "Limo.h"

int main() {
    std::cout << "Number of objects: " << Vehicle::get_number_of_objects()
        << std::endl << std::endl;

    Limo *limo = new Limo("B3A3");
    Taxi *taxi = new Taxi("B3A4");

    std::cout << "Created two vehicles." << std::endl << std::endl;
    std::cout << "Number of objects: " << Vehicle::get_number_of_objects()
        << std::endl << std::endl;

    std::cout << *limo << std::endl;
    std::cout << *taxi << std::endl;

    delete limo;
    delete taxi;

    std::cout << "Deleted two vehicles." << std::endl << std::endl;
    std::cout << "Number of objects: " << Vehicle::get_number_of_objects()
			<< std::endl;

    return 0;
}
