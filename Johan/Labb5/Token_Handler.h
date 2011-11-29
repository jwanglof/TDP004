#ifndef TOKEN_HANDLER_H_
#define TOKEN_HANDLER_H_

#include <iostream>
#include <string>

class Token_Handler
{
private:
public:
  Token_Handler();
  ~Token_Handler();

  virtual bool is_of_type(const std::string &totem) = 0;
};

#endif /* #ifndef TOKEN_HANDLER_H_ */
