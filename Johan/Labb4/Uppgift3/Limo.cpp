#include <iostream>
#include "Limo.h"

Limo::Limo(const std::string& reg_number) : Taxi(reg_number), Vehicle(reg_number, "white", 4)
{
  customers = false;
}

bool Limo::has_customers() const
{
  return customers;
}

void Limo::set_has_customers(const bool flag)
{
  customers = flag;
}

std::string Limo::get_class_name() const
{
  return "Limo:";
}

void Limo::print(std::ostream& os) const
{
  os << get_class_name() << std::endl;
  os << "Registration number: " << Vehicle::get_reg_number() << std::endl;
  os << "Number of doors: " << Vehicle::get_number_of_doors() << std::endl;
  os << "Color: " << Vehicle::get_color() << std::endl;

  if (customers)
    os << "Has customers" << std::endl;
  else
    os << "Has no customers" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Limo& rhs)
{
  rhs.print(os);
  return os;
}
