#include <deque>

class Postfix
{
	public:
		deque<string> infix_to_postfix(const string&);
		double evaluate(deque<string>);
};
