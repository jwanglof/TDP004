#include <iostream>
#include <list>
#include "Car_Park.h"

Car_Park::Car_Park(const int size_of_car_park) :
  car_park_size(size_of_car_park)
{}

Car_Park::~Car_Park()
{ }

int Car_Park::get_car_park_size()
{
  return car_park_size;
}

void Car_Park::park(Vehicle *reg_number)
{
  if (list_of_vehicles.size() < car_park_size)
  {
    Car_Park::list_of_vehicles.push_back(reg_number);
    std::cout << "Parked a " << *reg_number << std::endl;
  }
  else
    std::cout << "Not enough room to park the Limo" << std::endl;
}

void Car_Park::unpark(const std::string reg_number)
{
  std::cout << "asd" << std::endl;
}

void Car_Park::print(std::ostream& os) const
{
  os << "The following vehicles are in the carpark:" << std::endl;

  std::list<Vehicle *>::const_iterator it = list_of_vehicles.begin();
  for (; it != list_of_vehicles.end(); ++it)
  {
    (*it)->print(os);
    os << std::endl;
  }
}

/*int main()
{
  Car_Park cp(2);

  Taxi taxi1("lp1");
  Taxi taxi2("lp2");
  Limo limo1("mo1");

/*  cp.park(&taxi1);
  cp.park(&taxi2);
  cp.park(&limo1);

  std::cout << " " << " " << cp.get_list() << std::endl;
  
  return 0;
}*/
