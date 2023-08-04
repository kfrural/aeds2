livro.exe: main.o livro.o
	
	g++ -o livro.exe main.o livro.o

main.o: main.cpp 

	g++ -c main.cpp

livro.o: livro.cpp livro.h

	g++ -c livro.cpp

clear:

	rm *.o