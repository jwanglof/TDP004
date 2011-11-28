#include "Calculator.h"

Calculator::Calculator()
{ 
	// read_and_evaluate_expressions();
}

Calculator::~Calculator()
{ 
}

void Calculator::read_expressions()
{
	string inputExpression = "";

	while (cin >> inputExpression) {
		if (inputExpression != NULL) {
			expressions.push_back(inputExpression);
		}
	}
}

void Calculator::evaluate_expressions()
{
	vector<string>::iterator it;

	for (it = expressions.begin(); it < expressions.end(); it++)
		std::cout << it << std::endl;
}

void Calculator::read_and_evaluate_expressions()
{
	read_expressions();
	evaluate_expressions();
}
