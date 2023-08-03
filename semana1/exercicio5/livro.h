#include <string.h>



class Livro{
    private:
        std::string titulo;
        std::string autor;
        std::string editora;
        int numPaginas;

    public:
    Livro(std::string titulo, std::string autor, std::string editora, int numPaginas);

        std::string getTitulo();
        std::string getAutor();
        std::string getEditora();
        int getNumPaginas();

        void setTitulo(std::string titulo);
        void setAutor(std::string autor);
        void setEditora(sdt::string editora);
        void setNumPaginas(int numPaginas);
};