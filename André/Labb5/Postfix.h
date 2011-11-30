#ifndef POSTFIX_H_
#define POSTFIX_H_

#include <deque>
#include <iostream>
#include <stack>
#include <sstream>
#include <stdexcept>

#include "Operand_Handler.h"
#include "Operator_Handler.h"

class Postfix
{
	private:
		std::deque<std::string> postfix;
		Operand_Handler operand_handler;
		Operator_Handler operator_handler;
	public:
		std::deque<std::string> infix_to_postfix(const std::string &incoming_string);
		double evaluate(std::deque<std::string>);
};

#endif
