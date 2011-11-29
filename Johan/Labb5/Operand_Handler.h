#ifndef OPERAND_HANDLER_H_
#define OPERAND_HANDLER_H_

#include <iostream>
#include <string>

#include "Token_Handler.h"

class Operand_Handler: public Token_Handler
{
private:
public:
  Operand_Handler();
  ~Operand_Handler();

  bool is_of_type(const std::string &totem);
};

#endif /* ifndef OPERAND_HANDLER_H_  */
