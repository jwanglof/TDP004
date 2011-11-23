#ifndef LIMO_H_
#define LIMO_H_

#include <iostream>

#include "Taxi.h"
#include "Vehicle.h"

class Limo: public Taxi {
	public:
		Limo(const std::string& reg_number);

		// Virtual in base class (vehicle)
		std::string get_class_name() const;

		// Virtual in base class (vehicle)
		void print(std::ostream& os) const;

	private:
		bool customers;
};

#endif /* #ifndef TAXI_H_ */
