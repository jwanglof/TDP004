#include "Operator_Handler.h"

bool Operator_Handler::is_of_type(const std::string &token)
{
	if (token.length() > 1)
		return false;

	char operators[] = {'+', '-', '/', '*'};

	for (int i = 0; i < token.length(); i++) {
		for (int k = 0; k < 4; k++) {
			if (token[i] == operators[k])
				return true;
		}
	}

	return false;
}

// Equal or greater -> True
bool Operator_Handler::equal_operators(std::string first, std::string second)
{
	std::map<std::string, int> operator_value;
	operator_value["+"] = 1;
	operator_value["-"] = 1;
	operator_value["*"] = 2;
	operator_value["/"] = 2;

	if (operator_value[first] >= operator_value[second])
		return true;
	else
		return false;
}
