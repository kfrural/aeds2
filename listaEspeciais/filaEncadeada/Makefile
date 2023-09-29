main.exe: main.o FilaDuplamenteEncadeada.o Nodo.o Produto.o
	g++ -o main.exe FilaDuplamenteEncadeada.o Nodo.o Produto.o main.o

main.o: main.cpp
	g++ -c main.cpp

FilaDuplamenteEncadeada.o: FilaDuplamenteEncadeada.cpp FilaDuplamenteEncadeada.h
	g++ -c FilaDuplamenteEncadeada.cpp

Nodo.o: Nodo.cpp Nodo.h
	g++ -c Nodo.cpp

Produto.o: Produto.cpp Produto.h
	g++ -c Produto.cpp

clean:
	rm *.o
