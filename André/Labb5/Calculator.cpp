#include "Calculator.h"

void Calculator::read_and_evaluate_expressions()
{
	std::string currentInfix;
	
	while (getline(std::cin, currentInfix)) {
			expressions.push_back(currentInfix);
	}

	std::vector<std::string>::iterator it;
	for (it = expressions.begin(); it < expressions.end(); it++) {
		Postfix p;
		try {
			std::deque<std::string> postfix_expression;
			postfix_expression = p.infix_to_postfix(*it);
			std::cout << "Infix expression: " << *it << std::endl;
			std::cout << "Postfix expression: " << create_postfix_string(postfix_expression) << std::endl;
			std::cout << "Evaluates to: " << p.evaluate(postfix_expression) << std::endl;
		}
		catch (const std::runtime_error &e) {
			std::cerr << "Caught exception for: " << *it << std::endl;
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;
	}
}

std::string Calculator::create_postfix_string(std::deque<std::string> postfix_deque)
{
	std::deque<std::string>::iterator it;
	std::string return_string;

	for (it = postfix_deque.begin(); it < postfix_deque.end(); it++)
		return_string += *it + " ";

	return return_string;
}

int main()
{
	Calculator c;
	c.read_and_evaluate_expressions();

	return 0;
}
