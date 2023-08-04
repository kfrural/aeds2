motor.exe: main.o motor.o
	
	g++ -o motor.exe main.o motor.o

main.o: main.cpp 

	g++ -c main.cpp

motor.o: motor.cpp motor.h

	g++ -c motor.cpp

clear:

	rm *.o