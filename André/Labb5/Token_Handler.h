#ifndef TOKEN_HANDLER_H
#define TOKEN_HANDLER_H

#include <string>

class Token_Handler
{
	public:
		virtual bool is_of_type(const std::string &token) { };
};

#endif
