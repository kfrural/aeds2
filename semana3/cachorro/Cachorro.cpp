#include "Cachorro.h"

Cachorro::Cachorro(){
    this->id = id;
    this->nome = nome;
    this->sexo = sexo;
    this->idade = idade;
}

int Cachorro::getId(){
    return id;
}
string Cachorro::getNome(){
    return nome;
}
char Cachorro::getSexo(){
    return sexo;
}
int Cachorro::getIdade(){
    return idade;
}

void Cachorro::setId(int id){
    this->id = id;
}
void Cachorro::setNome(string nome){
    this->nome = nome;
}
void Cachorro::setSexo(char sexo){
    this->sexo = sexo;
}
void Cachorro::setIdade(int idade){
    this->idade = idade;
}

void Cachorro::salvarArquivo(){
    string caminhoPasta = "cachorro.txt";
    ofstream arquivoSalvo;
    arquivoSalvo.open(caminhoPasta);
    
    cout << "Forneca as informacoes abaixo\n\n";
    cout << "ID: ";
    cin >> id;
    cout << "\nNome: ";
    cin >> nome;
    cout << "\nSexo: ";
    cin >> sexo;
    cout << "\nIdade: ";
    cin >> idade;
    
    arquivoSalvo << id << nome  << sexo  << idade;
    
    arquivoSalvo.close();
}

void Cachorro::printArquivo(){
    string caminhoPasta = "cachorro.txt";
    ifstream arquivoLido;
    arquivoLido.open(caminhoPasta);
    
    arquivoLido >> id >> nome >> sexo >> idade;
    arquivoLido.close();
    
    cout << "Os dados sao \n\n";
    cout << "ID: " << id;
    cout << "\nNome: " << nome;
    cout << "\nSexo: " << sexo;
    cout << "\nIdade: " << idade;
}
