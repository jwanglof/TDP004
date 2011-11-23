labb4 : test_car_park.cpp Vehicle.o Taxi.o Limo.o Car_Park.o
	g++ -o labb4 test_car_park.cpp *.o

test_car_park.cpp : Vehicle.o Taxi.o Limo.o Car_Park.o

Vehicle.o : Vehicle.cpp
	g++ -c Vehicle.cpp 

Taxi.o : Taxi.cpp 
	g++ -c Taxi.cpp 

Limo.o : Limo.cpp 
	g++ -c Limo.cpp 

Car_Park.o : Car_Park.cpp 
	g++ -c Car_Park.cpp 

clean :
	rm labb4 *.o
