#include <iostream>
#include <string>

using namespace std;

class Musica{
    private:
        string titulo;
        string artista;
        double duracao;
        double preco;

    public:
    Musica();// construtor
    Musica(Musica &outra);

        string getTitulo();//metodo get pega o valor
        string getArtista();
        double getDuracao();
        double getPreco();

        void setTitulo(string titulo);
        void setArtista(string artista);
        void setDuracao(double duracao);//metodo set moifica o vaor
        void setPreco(double preco);
        
        void print();
        void fill();
        void copiar(Musica &outra);
        
};
