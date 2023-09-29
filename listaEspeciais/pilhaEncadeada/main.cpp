#include <iostream>
#include "PilhaDuplamenteEncadeada.h"

using namespace std;

void menu(){
    cout << "\t\t---------MENU---------\n\n";
    cout << "\t\t1- Inserir: \n";
    cout << "\t\t2- Remover: \n";
    cout << "\t\t0 - Sair\n\n";
    cout << "Escolha uma opcao: ";
}

int main()
{
    int pos = 0;
    int opcao = -1;
    PilhaDuplamenteEncadeada p;
    
    do{
        menu();
        cin >> opcao;
        
        switch(opcao){
            case 1:
                p.insert();
                break;
            case 2:
                p.remove();
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Nao tem essa opcao!\n";
        }
        p.imprimir();
    }while(opcao != 0);

    return 0;
}
