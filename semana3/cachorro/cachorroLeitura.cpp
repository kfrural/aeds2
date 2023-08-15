#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

void exibirDados(int id, string nome, char sexo, int idade){
    string caminhaPasta = "Cachorro.txt";
    ifstream arquivoLido;
    arquivoLido.open(caminhaPasta);
    
    arquivoLido >> id >> nome >> sexo >> idade;
    arquivoLido.close();
    
    cout << "Os dados sao \n\n";
    cout << "ID: " << id;
    cout << "\nNome: " << nome;
    cout << "\nSexo: " << sexo;
    cout << "\nIdade: " << idade;
}

int main()
{
    string caminhoPasta = "Cachorro.txt";
    ofstream arquivoSalvo;
    arquivoSalvo.open(caminhoPasta.c_str());
    
    int id;
    string nome;
    char sexo;
    int idade;
    
    cout << "Forneca as informacoes abaixo\n\n";
    cout << "ID: ";
    cin >> id;
    cout << "Nome: ";
    cin >> nome;
    cout <<"Sexo (m/f): ";
    cin >> sexo;
    cout << "Idade: ";
    cin >> idade;
    arquivoSalvo << id << nome << sexo << idade;
    
    exibirDados(id, nome, sexo, idade);
    
    

    return 0;
}
