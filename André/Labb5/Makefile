
labb5 : main.cpp Calculator.o
	g++ main.cpp *.o

Calculator.o : Calculator.cpp
	g++ -c Calculator.cpp

Postfix.o : Postfix.cpp Operand_Handler.o Operator_Handler.o
	g++ -c Postfix.cpp Operator_Handler.o Operand_Handler.o

Operand_Handler.o : Operand_Handler.cpp
	g++ -c Operand_Handler.cpp

Operator_Handler.o : Operator_Handler.cpp
	g++ -c Operator_Handler.cpp

clean :
	rm labb5 *.o
