listaContigua.exe: main.o ListaContigua.o Livro.o
	g++ -o listaContigua.exe main.o ListaContigua.o Livro.o

main.o: main.cpp
	g++ -c main.cpp

ListaContigua.o: ListaContigua.cpp ListaContigua.h
	g++ -c ListaContigua.cpp

Livro.o: Livro.cpp Livro.h
	g++ -c Livro.cpp

clean: 
	rm *.o


