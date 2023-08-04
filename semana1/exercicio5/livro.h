#include <string>

using namespace std;

class Livro{
    private:
        string titulo;
        string autor;
        string editora;//atributos
        int numPaginas;

    public:
    Livro(string titulo, string autor, string editora, int numPaginas);// construtor

        string getTitulo();//metodo get pega o valor
        string getAutor();
        string getEditora();
        int getNumPaginas();

        void setTitulo(string titulo);
        void setAutor(string autor);
        void setEditora(string editora);//metodo set moifica o vaor
        void setNumPaginas(int numPaginas);
};