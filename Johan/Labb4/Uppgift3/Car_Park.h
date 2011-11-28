#ifndef CARPARK_H_
#define CARPARK_H_

#include <iostream>
#include <string>
#include <list>

#include "Vehicle.h"
#include "Taxi.h"
#include "Limo.h"

class Car_Park
{
public:
  Car_Park(const int size_of_car_park);
  ~Car_Park();

  int get_car_park_size();

  void park(Vehicle *reg_number);
  void unpark(const std::string reg_number);

  void print(std::ostream& os) const;

private:
  int car_park_size;
  std::list<Vehicle *> list_of_vehicles;
};

#endif /* #ifndef CARPARK_H_ */
