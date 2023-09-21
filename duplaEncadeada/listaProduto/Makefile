main.exe: main.o DuplamenteEncadeada.o Nodo.o Produto.o
	g++ -o main.exe DuplamenteEncadeada.o Nodo.o Produto.o

DuplamenteEncadeada.o: DuplamenteEncadeada.cpp DuplamenteEncadeada.h
	g++ -c DuplamenteEncadeada.cpp

Nodo.o: Nodo.cpp Nodo.h
	g++ -c Nodo.cpp

Produto.o: Produto.cpp Produto.h
	g++ -c Produto.cpp

main.o: main.cpp 
	g++ -c main.cpp

clean:
	rm *.o
