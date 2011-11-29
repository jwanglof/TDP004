labb5 : Postfix.cpp Token_Handler.o Operator_Handler.o Operand_Handler.o
	g++ -o labb5 Postfix.cpp *.o

Token_Handler.o : Token_Handler.cpp
	g++ -c Token_Handler.cpp

Operand_Handler.o : Operand_Handler.cpp
	g++ -c Operand_Handler.cpp

Operator_Handler.o : Operator_Handler.cpp
	g++ -c Operator_Handler.cpp

clean :
	rm labb5 *.o