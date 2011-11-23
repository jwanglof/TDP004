#include <iostream>

#include "Car_Park.h"
#include "Taxi.h"
#include "Limo.h"

int main() {
    Car_Park carpark(2);

    Taxi taxi1("T1");
    Taxi taxi2("T2");
    Limo limo1("L1");

    carpark.park(&taxi1);
    carpark.park(&taxi2);
    carpark.park(&limo1);

    std::cout << std::endl;
    carpark.print(std::cout);

    carpark.unpark(taxi1.get_reg_number());
    carpark.park(&limo1);

    std::cout << std::endl;
    carpark.print(std::cout);

    return 0;
}
