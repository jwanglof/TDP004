#include "Postfix.h"

Postfix::Postfix()
{ }

Postfix::~Postfix()
{ }

std::deque<std::string> Postfix::infix_to_postfix(const std::string &infixExpr)
{
  std::deque<std::string> operatorStack;
  std::deque<std::string> outputStack;
  std::string numbers;
  
/*  if (infixExpr.size() == 1)
    outputStack.push_back(infixExpr);
    return outputStack;*/

  // Om en operator är överst läggs den till överst i operator_stack, om inte det finns en där redan som har lägre prio.
  // Då läggs denna till i slutet ist
  // Om en operand kommer läggs den till i output_stack direkt

  int i = 0;

  std::stringstream ss(infixExpr);

  while (ss >> numbers)
  {
    if (operatorClass.is_of_type(numbers))
    {
      std::string popValue;
      if (operatorStack.size() == 0)
      {
        operatorStack.push_back(numbers);
      }
      else
      {
        if (operatorClass.checkPriority(operatorStack[0], numbers))
        {
          popValue = operatorStack[0];
          operatorStack.pop_front();
          operatorStack.push_back(numbers);
          operatorStack.push_back(popValue);
//        operatorStack.insert(0, numbers);
        }
//        std::cout << operatorStack[0] << " " << numbers << std::endl;
      }
    }

    ++i;
  }

  for (int i = 0; i < operatorStack.size(); ++i)
    std::cout << operatorStack[i] << std::endl;
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
