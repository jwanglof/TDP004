#include <iostream>

#include "Taxi.h"
#include "Limo.h"

Limo::Limo(const std::string& reg_number) : Taxi(reg_number)
{
	Vehicle::set_color("White");
	set_has_customers(false);
}

std::string Limo::get_class_name() const
{
	return "Limo";
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
