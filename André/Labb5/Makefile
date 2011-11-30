
labb5 : main.cpp Calculator.o Postfix.o Operator_Handler.o Operand_Handler.o
	g++ -o labb5 main.cpp *.o

Calculator.o : Calculator.cpp Postfix.o
	g++ -c Calculator.cpp Postfix.o

Postfix.o : Postfix.cpp Operand_Handler.o Operator_Handler.o
	g++ -c Postfix.cpp Operator_Handler.o Operand_Handler.o

Operand_Handler.o : Operand_Handler.cpp
	g++ -c Operand_Handler.cpp

Operator_Handler.o : Operator_Handler.cpp
	g++ -c Operator_Handler.cpp

clean :
	rm labb5 *.o
