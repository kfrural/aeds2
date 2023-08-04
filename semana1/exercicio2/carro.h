#include <string>
using namespace std;

class Carro{
    private:
        string nome;
        string marca;
        double motorizacao;
        string cor;
        double valor;
    
    public:
        Carro(string nome, string marca, double motorizacao, string cor, double valor);
        
        string getNome();
        string getMarca();
        double getMotorizacao();
        string getCor();
        double getValor();
        
        void setNome(string nome);
        void setMarca(string marca);
        void setMotorizacao(double motorizacao);
        void setCor(string cor);
        void setValor(double valor);
        
};


