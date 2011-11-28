#ifndef POSTFIX_H_
#define POSTFIX_H_

#include <deque>
#include <string>

class Postfix
{
private:
  Postfix();
  ~Postfix();
public:
  std::deque<std::string> infix_to_postfix(std::string infixExpr);
  double evaluate(std::deque<std::string>);
  std::string bla(std::string asd);
};

#endif /* ifndef POSTFIX_H_ */
