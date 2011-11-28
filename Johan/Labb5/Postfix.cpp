#include <iostream>
#include <string>
#include <deque>

#include <vector>
#include <map>

#include "Postfix.h"

Postfix::Postfix()
{ }

Postfix::~Postfix()
{ }

std::deque<std::string> Postfix::infix_to_postfix(std::string infixExpr)
{
  std::deque<char> expression;

  std::vector<std::string> operatorPrio;
  operatorPrio.push_back("()");
  operatorPrio.push_back("^");
  operatorPrio.push_back("*");
  operatorPrio.push_back("/");
  operatorPrio.push_back("+");
  operatorPrio.push_back("-");

  std::map<std::string, int> operatorPrio2;
  operatorPrio2["()"] = 1;
  operatorPrio2["^"] = 2;
  operatorPrio2["*"] = 3;
  operatorPrio2["/"] = 4;
  operatorPrio2["+"] = 5;
  operatorPrio2["-"] = 6;
  
/*  if (infixExpr.size() == 1)
    return expression;*/

  // Adds all the characters in the deque
  for (int i = 0; i < infixExpr.size(); ++i)
  {
    if (infixExpr[i] == '^')
      std::cout << 1 << std::endl;
    expression.push_back(infixExpr[i]);
  }

  
}

double Postfix::evaluate(std::deque<std::string>)
{
  return 1.2;
}

int main()
{
  Postfix postiz;

  std::cout << "Calculate something" << std::endl;
  std::string infixExpr;
  std::cin >> infixExpr;
  // Segmentation fault, whyy?
  postiz.infix_to_postfix(infixExpr);


  return 0;
}
