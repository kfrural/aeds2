#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Cachorro{
    private:
        int id;
        string nome;
        char sexo;
        int idade;
        
    public:
        Cachorro();
        
        int getId();
        string getNome();
        char getSexo();
        int getIdade();
        
        void setId(int id);
        void setNome(string nome);
        void setSexo(char sexo);
        void setIdade(int idade);
        
        void salvarArquivo();
        void printArquivo();
};
