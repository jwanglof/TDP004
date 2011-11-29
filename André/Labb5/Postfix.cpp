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
	bool last_was_operator = true;

	std::string currentString;
	while (incoming_stream >> currentString) {

		// Is operand
		if (operand_handler.is_of_type(currentString)) {
			postfix.push_back(currentString);
			last_was_operator = false;
		}
		// Is operator
		else if (operator_handler.is_of_type(currentString)) {
			// Throw exception
			if (last_was_operator == true)
				throw std::runtime_error("The must be an operand before each operator!");

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

			last_was_operator = true;
		}
		else {
			// Throw exception
			throw std::runtime_error("Exception in evaluate(): Encountered a symbol\" " + currentString + "\"\nthat is neither a valid operator nor a valid operand.");
		}
	}

	if (last_was_operator)
		// Throw exception
		throw std::runtime_error("There must be and operand after each operator!");

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

	for (it = deck_of_strings.begin(); it < deck_of_strings.end(); it++) {
		std::stringstream currentString;
		currentString << *it;

		if (currentString >> currentValue) {
			operandStack.push(currentValue);
		}
		else {
			double first = operandStack.top();
			operandStack.pop();
			double second = operandStack.top();
			operandStack.pop();

			double currentSum = 0;
			char currentOperator;

			currentString.clear();
			currentOperator = currentString.str()[0];

			switch (currentOperator) {
				case '+':
					currentSum = second + first;
					break;
				case '-':
					currentSum = second - first;
					break;
				case '*':
					currentSum = second * first;
					break;
				case '/':
					if (first == 0)
						throw std::runtime_error("You're not Chuck Norris. You can't divide by zero!");
					currentSum = second / first;
					break;
			}

			operandStack.push(currentSum);
		} 
	}

	return operandStack.top();
}
