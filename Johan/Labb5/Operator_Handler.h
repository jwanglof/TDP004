#ifndef OPERATOR_HANDLER_H_
#define OPERATOR_HANDLER_H_

#include <iostream>
#include <string>
#include <map>

#include "Token_Handler.h"

class Operator_Handler: public Token_Handler
{
private:
public:
  Operator_Handler();
  ~Operator_Handler();

  bool checkPriority(const std::string&, const std::string&);
  bool is_of_type(const std::string &totem);
};

#endif /* #ifndef OPERATOR_HANDLER_H_ */
