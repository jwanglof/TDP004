labb4 : test_limo.cpp Vehicle.o Taxi.o Limo.o
	g++ -o labb4 test_limo.cpp *.o

test_limo.cpp : Vehicle.o Taxi.o Limo.o

Vehicle.o : Vehicle.cpp
	g++ -c Vehicle.cpp 

Taxi.o : Taxi.cpp 
	g++ -c Taxi.cpp 

Limo.o : Limo.cpp 
	g++ -c Limo.cpp 

clean :
	rm labb4 *.o
