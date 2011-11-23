labb4 : test_vehicle.cpp Vehicle.o Taxi.o
	g++ -o labb4 test_vehicle.cpp *.o

test_vehicle.cpp : Vehicle.o Taxi.o

Vehicle.o : Vehicle.cpp
	g++ -c Vehicle.cpp 

Taxi.o : Taxi.cpp 
	g++ -c Taxi.cpp 

clean :
	rm labb4 *.o
