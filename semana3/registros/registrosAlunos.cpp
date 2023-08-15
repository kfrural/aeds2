#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
    string caminhoPasta = "estudantes.txt";
    ofstream arquivoSalvo;
    arquivoSalvo.open(caminhoPasta.c_str());
    
    int matricula;
    string nome;
    string curso;
    
    cout << "Forneca as informacoes abaixo\n\n";
    cout << "Matricula: ";
    cin >> matricula;
    cout << "Nome: ";
    cin >> nome;
    cout << "Curso: ";
    cin >> curso;
    arquivoSalvo << matricula << " - " << nome << " - "<< curso;
    
    

    return 0;
}
