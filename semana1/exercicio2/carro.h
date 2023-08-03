
class Carro{
    private:
        string nome;
        string marca;
        string motorizacao;
        string cor;
        double valor;
    
    public:
        Carro(string nome, string marca, string motorizacao, string cor, double valor);
        
        string getNome();
        string getMarca();
        string getMotorizacao();
        string getCor();
        double getValor();
        
        void setNome(string nome);
        void setMarca(string marca);
        void setMotorizacao(string motorizacao);
        void setCor(string cor);
        void setValor(double valor);
        
        void imprimir();
        void preencher(string nome, string marca, string motorizacao, string cor, double valor);
        Carro copiar();
};


