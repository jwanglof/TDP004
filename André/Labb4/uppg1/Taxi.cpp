#include <iostream>

#include "Taxi.h"
#include "Vehicle.h"

Taxi::Taxi(const std::string& reg_number) : Vehicle(reg_number, "Yello", 4)
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

std::string Taxi::get_class_name() const
{
	return "Taxi";
}

void Taxi::print(std::ostream& os) const
{ }


/*

	Taxi(const std::string& reg_number);
		bool has_customers() const;
		void set_has_customers(const bool flag);

		// Virtual in base class (vehicle)
		std::string get_class_name() const;

		// Virtual in base class (vehicle)
		void print(std::ostream& os) const;

		friend std::ostream& operator<<( std::ostream& os,
										const Taxi& rhs);
*/
