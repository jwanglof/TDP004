#ifndef POSTFIX_H_
#define POSTFIX_H_

#include <deque>
#include <string>
#include <sstream>

#include <map>
#include <iostream>

#include "Operator_Handler.h"
#include "Operand_Handler.h"

class Postfix
{
private:
  Operator_Handler operatorClass;
  Operand_Handler operandClass;
public:
  Postfix();
  ~Postfix();

  std::deque<std::string> infix_to_postfix(const std::string&);
  double evaluate(std::deque<std::string>);
};

#endif /* ifndef POSTFIX_H_ */
