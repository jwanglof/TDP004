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
