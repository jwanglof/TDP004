#include "Operand_Handler.h"

Operand_Handler::Operand_Handler()
{ }

Operand_Handler::~Operand_Handler()
{ }

bool Operand_Handler::is_of_type(const std::string &totem)
{
  if (totem == "*")
    return false;
  else if (totem == "/")
    return false;
  else if (totem == "+")
    return false;
  else if (totem == "-")
    return false;
  else
    return true;
}

