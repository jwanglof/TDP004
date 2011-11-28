#include "Operator_Handler.h"

bool Operator_Handler::is_of_type(const std::string &token)
{
	std::cout << token << std::endl;

	return true;
}

int main()
{
	Operator_Handler o;
	std::string tjosan = "+";
	
	o.is_of_type(tjosan);

	return 0;
}
