#include <iostream>
#include <vector>

class Calculator
{
	private:
		vector<std::string> expressions;
	public:
		Calculator();
		~Calculator();
		void read_and_evaluate_expressions();
		void read_expressions();
		void evaluate_expressions();
};

/*
Denna klass ska instantieras av main() som sedan ska anropa dess publika medlemsfunktion
read_and_evaluate_expressions(). Denna funktion ska läsa infixuttryck radvis från
stdin till EOF. Varje infixuttryck som lästs in ska omvandlas till postfixform, beräknas och skrivas
ut. Utskriften ska inkludera uttrycket i både infix- och postfixform och vad uttrycket evaluerades till.
Om ett ogiltigt uttryck påträffas (mer om det längre ned) ska en felutskrift visas och programmet ska
sedan behandla nästa uttryck.
*/
