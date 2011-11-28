#include <deque>
#include <iostream>
#include <stack>
#include <sstream>

#include "Operand_Handler.h"
#include "Operator_Handler.h"

class Postfix
{
	private:
		std::deque<std::string> postfix;
	public:
		std::deque<std::string> infix_to_postfix(const std::string &incoming_string);
		double evaluate(std::deque<std::string>);
};
