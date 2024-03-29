#ifndef OPERAND_HANDLER_H
#define OPERAND_HANDLER_H

#include "Token_Handler.h"
#include <iostream>
#include <sstream>
#include <stdexcept>

class Operand_Handler : public Token_Handler
{
	public:
		// virtual from base-class Token_Handler
		bool is_of_type(const std::string &token);
};

#endif
