#include <iostream>
#include <string>
#include "Vehicle.h"

Vehicle::Vehicle(const std::string& reg_number,
                 const std::string& color,
                 const int number_of_doors) :
  vehicle_reg_number(reg_number),
  vehicle_color(color),
  vehicle_number_of_doors(number_of_doors)
{
//  Vehicle::number_of_objects++;
}

//int Vehicle::number_of_objects = 0;

Vehicle::~Vehicle()
{ }

void Vehicle::set_color(const std::string& color)
{
  vehicle_color = color;
}

std::string Vehicle::get_color() const
{
  return vehicle_color;
}

int Vehicle::get_number_of_doors() const
{
  return vehicle_number_of_doors;
}

std::string Vehicle::get_reg_number() const
{
  return vehicle_reg_number;
}

std::string Vehicle::get_class_name() const
{
  return "Vehicle";
}

void Vehicle::print(std::ostream& os) const
{
  os << 1 << std::endl;
}

int Vehicle::get_number_of_objects()
{
  return 0;
}

std::ostream& operator<<(std::ostream& os, const Vehicle& rhs)
{
  return os << rhs;
}
