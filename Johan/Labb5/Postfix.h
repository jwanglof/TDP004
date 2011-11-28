#ifndef POSTFIX_H_
#define POSTFIX_H_

#include <deque>
#include <string>

class Postfix
{
private:
public:
  Postfix();
  ~Postfix();

  std::deque<std::string> infix_to_postfix(std::string infixExpr);
  double evaluate(std::deque<std::string>);
};

#endif /* ifndef POSTFIX_H_ */
