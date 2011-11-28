#include "Operand_Handler.h"

bool Operand_Handler::is_of_type(const std::string &token)
{
	std::stringstream ss;
	ss << token.c_str();
	double value;

	if (ss >> value)
		return true;

	return false;
}
