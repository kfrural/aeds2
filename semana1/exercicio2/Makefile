carro.exe: main.o carro.o
	
	g++ -o carro.exe main.o carro.o

main.o: main.cpp 

	g++ -c main.cpp

carro.o: carro.cpp carro.h

	g++ -c carro.cpp

clear:

	rm *.o