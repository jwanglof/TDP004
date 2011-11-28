#include "Token_Handler.h"
#include <iostream>

class Operator_Handler : public Token_Handler
{
	public:
		// virtual from base-class Token_Handler
		bool is_of_type(const std::string &token);
};
