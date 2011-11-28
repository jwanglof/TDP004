#include <iostream>
#include <string>
#include <deque>

#include "Postfix.h"

Postfix::Postfix()
{ }

Postfix::~Postfix()
{ }

std::deque<std::string> Postfix::infix_to_postfix(std::string infixExpr)
{
  std::cout << infixExpr << std::endl;
}

double Postfix::evaluate(std::deque<std::string>)
{
  return 1.2;
}

int main()
{
  std::cout << "Calculate something" << std::endl;
  std::string bla;

  return 0;
}
