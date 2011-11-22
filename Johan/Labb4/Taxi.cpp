#include "Taxi.h"

Taxi::Taxi(const std::string& reg_number) :
  Vehicle::Vehicle(reg_number, "Yellow", 4)
{
  customers = false;
}

bool Taxi::has_customers() const
{
  return customers;
}

void Taxi::set_has_customers(const bool flag)
{
  customers = flag;
}

std::ostream& operator<<(std::ostream& os, const Taxi& rhs)
{
  return os << rhs;
}
