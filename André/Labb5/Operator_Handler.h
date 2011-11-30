#ifndef OPERATOR_HANDLER_H
#define OPERATOR_HANDLER_H

#include "Token_Handler.h"
#include <map>

class Operator_Handler : public Token_Handler
{
	public:
		// virtual from base-class Token_Handler
		bool is_of_type(const std::string &token);
		bool equal_operators(std::string first, std::string second);
};

#endif
