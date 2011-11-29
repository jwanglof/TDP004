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
			std::cout << p.evaluate(p.infix_to_postfix(*it)) << std::endl;
		}
		catch (const std::runtime_error &e) {
			std::cerr << "Caught exception for: " << *it << std::endl;
			std::cerr << e.what() << std::endl;
		}

		std::cout << std::endl;
	}
}

int main()
{
	Calculator c;
	c.read_and_evaluate_expressions();

	return 0;
}
