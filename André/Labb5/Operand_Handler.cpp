#include "Operand_Handler.h"

bool Operand_Handler::is_of_type(const std::string &token)
{
	for (int i = 0; i < token.length(); i++) {
		if (!isdigit(token[i]))
			return false;
	}

	return true;
}
