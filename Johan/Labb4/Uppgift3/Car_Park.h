#ifndef CARPARK_H_
#define CARPARK_H_

#include <iostream>
#include <string>
#include <list>

#include "Vehicle.h"

class Car_Park
{
public:
  Car_Park(const int size_of_car_park);

  int get_car_park_size();
//  void park(const std::string *reg_number)
  void park(Vehicle *reg_number);
  std::string unpark(const std::string reg_number);
  void add_to_list(std::string reg_number);
  int get_list();
  void print(std::ostream& os) const;

private:
  int car_park_size;
  std::list<Vehicle *> list_of_vehicles;
};

#endif /* #ifndef CARPARK_H_ */
