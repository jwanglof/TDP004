#ifndef LIMO_H_
#define LIMO_H_

#include <iostream>

#include "Taxi.h"
#include "Vehicle.h"

class Limo: public Taxi {
	public:
		Limo(const std::string& reg_number);
		std::string get_class_name() const;

	private:
		bool customers;
};

#endif /* #ifndef TAXI_H_ */
