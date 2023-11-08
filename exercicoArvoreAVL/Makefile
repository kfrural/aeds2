main.exe: main.o ArvoreAVL.o Nodo.o Produto.o
	g++ -o main.exe ArvoreAVL.o Nodo.o Produto.o main.o

main.o: main.cpp
	g++ -c main.cpp

ArvoreAVL.o: ArvoreAVL.cpp ArvoreAVL.h
	g++ -c ArvoreAVL.cpp

Nodo.o: Nodo.cpp Nodo.h
	g++ -c Nodo.cpp

Produto.o: Produto.cpp Produto.h
	g++ -c Produto.cpp

clean:
	rm *.o
