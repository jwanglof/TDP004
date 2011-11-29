#include "Operator_Handler.h"

Operator_Handler::Operator_Handler()
{ }

Operator_Handler::~Operator_Handler()
{ }

bool Operator_Handler::checkPriority(const std::string &first, const std::string &second)
{
  std::map<std::string, int> operators;
  operators["*"] = 1;
  operators["/"] = 1;
  operators["+"] = 2;
  operators["-"] = 2;

  return (operators[first] >= operators[second]);
}

bool Operator_Handler::is_of_type(const std::string &totem)
{
  if (totem.size() > 1)
    return false;

  if (totem == "*")
    return true;
  else if (totem == "/")
    return true;
  else if (totem == "+")
    return true;
  else if (totem == "-")
    return true;
  else
    return false;
}
