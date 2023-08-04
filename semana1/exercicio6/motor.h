#include <string>

using namespace std;

class Motor{
    private:
        string tipo;
        double potencia;
        double consumo;//atributos

    public:
    Motor(string tipo, double potencia , double consumo);// construtor

        string getTipo();//metodo get pega o valor
        double getPotencia();
        double getConsumo();

        void setTipo(string tipo);
        void setPotencia(double potencia);
        void setConsumo(double consumo);//metodo set moifica o vaor
};