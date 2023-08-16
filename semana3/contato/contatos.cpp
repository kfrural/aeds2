#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string nome, novoTelefone, linha;
    int tam = 0;
    
    ifstream arquivoContagem("contatos.txt");
    while(getline(arquivoContagem, linha)){
        tam++;
    }
    arquivoContagem.close();
    
    string *contatos = new string[tam];
    ifstream arquivoEntrada("contatos.txt");
    for(int i = 0; i < tam; i++){
        getline(arquivoEntrada, contatos[i]);
    }
    arquivoEntrada.close();
    
    cout << "Nome do contato para atualizar: ";
    getline(cin, nome);
    cout << "Novo numero de telefone: ";
    getline(cin, novoTelefone);
    
    for(int i = 0; i < tam; i++){
        size_t pos = contatos[i].find(" - ");
        if(pos != string::npos && contatos[i].substr(0, pos) == nome){
            contatos[i] = nome + " - " + novoTelefone;
        }
    }
    
    ofstream arquivoSaida("contatos.txt");
    for(int i = 0; i < tam; i++){
        arquivoSaida << contatos[i] << endl;
    }
    arquivoSaida.close();
    
    delete[] contatos;
    
    cout << "Contatos atualizadinhos\n\n";

    return 0;
}
