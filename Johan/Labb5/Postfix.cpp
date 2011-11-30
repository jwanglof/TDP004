#include "Postfix.h"

Postfix::Postfix()
{ }

Postfix::~Postfix()
{ }

std::deque<std::string> Postfix::infix_to_postfix(const std::string &infixExpr)
{
  std::deque<std::string> operatorStack;
  std::deque<std::string> outputStack;
  std::string currentString;
  
/*  if (infixExpr.size() == 1)
    outputStack.push_back(infixExpr);
    return outputStack;*/

  // Om en operator är överst läggs den till överst i operator_stack, om inte det finns en där redan som har lägre prio.
  // Då läggs denna till i slutet ist
  // Om en operand kommer läggs den till i output_stack direkt

  int i = 0;

  std::stringstream ss(infixExpr);

  while (ss >> currentString)
  {
    if (operandClass.is_of_type(currentString))
    {
      outputStack.push_back(currentString);
    }
    else if (operatorClass.is_of_type(currentString))
    {
      if (operatorStack > 0)
      {
        if (operatorClass.checkPriority(operatorStack[0], currentString))
        {
          outputStack.push_back(operatorStack[0]);
          operatorStack.pop_back();
          operatorStack.push_back(currentString);
        }
      }
      else
        operatorStack.push_back(currentString);
    }

    ++i;
  }

/*  for (int i = 0; i < operatorStack.size(); ++i)
    std::cout << operatorStack[i] << std::endl;*/
}

double Postfix::evaluate(std::deque<std::string>)
{
  return 1.2;
}

int main()
{
  Postfix postiz;

/*  std::cout << "Calculate something" << std::endl;
  std::string infixExpr;
  std::cin >> infixExpr;*/
  // Segmentation fault, why?
  postiz.infix_to_postfix("3 * 30 + 3");

  return 0;
}
