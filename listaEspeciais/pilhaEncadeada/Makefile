main.exe: main.o PilhaDuplamenteEncadeada.o Nodo.o Produto.o
	g++ -o main.exe PilhaDuplamenteEncadeada.o Nodo.o Produto.o main.o

main.o: main.cpp
	g++ -c main.cpp

PilhaDuplamenteEncadeada.o: PilhaDuplamenteEncadeada.cpp PilhaDuplamenteEncadeada.h
	g++ -c PilhaDuplamenteEncadeada.cpp

Nodo.o: Nodo.cpp Nodo.h
	g++ -c Nodo.cpp

Produto.o: Produto.cpp Produto.h
	g++ -c Produto.cpp

clean:
	rm *.o
