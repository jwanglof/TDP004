#include "Postfix.h"

std::deque<std::string> Postfix::infix_to_postfix(const std::string &incoming_string)
{
	if (!incoming_string.size() > 0)
		return postfix;

	std::stack<std::string> operatorStack;

	Operator_Handler operator_handler;
	Operand_Handler operand_handler;

	std::stringstream incoming_stream;
	incoming_stream << incoming_string;

	std::string currentString;
	while (incoming_stream >> currentString) {

		// Is operand
		if (operand_handler.is_of_type(currentString)) {
			postfix.push_back(currentString);
		}
		// Is operator
		else if (operator_handler.is_of_type(currentString)) {
			// Check if stack is empty
			if (operatorStack.size() > 0) {
				if (operator_handler.equal_operators(operatorStack.top(), currentString)) {
					postfix.push_back(operatorStack.top());
					operatorStack.pop();
					operatorStack.push(currentString);
				}
				else			
					operatorStack.push(currentString);
			}
			else
				operatorStack.push(currentString);
		}
	}

	// Add remaining operators from the stack
	while (operatorStack.size() > 0) {
		postfix.push_back(operatorStack.top());
		operatorStack.pop();
	}
		
	return postfix;
}

double Postfix::evaluate(std::deque<std::string> deck_of_strings)
{
	double currentValue = 0;
	std::stack<double> operandStack;
	std::deque<std::string>::iterator it;

	Operand_Handler operand_handler;
	Operator_Handler operator_handler;

	for (it = deck_of_strings.begin(); it < deck_of_strings.end(); it++) {
		std::cout << *it << " ";
	}

	std::cout << std::endl;

	return 0.0;
}

int main()
{
	Postfix p;
	double y;

	std::deque<std::string> tjosan = p.infix_to_postfix("1 * 2 + 3 / 4");
	y = p.evaluate(tjosan);

	return 0;
}
