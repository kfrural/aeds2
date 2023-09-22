#include <iostream>
#include "DuplamenteEncadeada.h"

using namespace std;

void menu(){
    cout << "\t\t---------MENU---------\n\n";
    cout << "\t\t1- Inserir: \n";
    cout << "\t\t2- Inserir na posicao:\n ";
    cout << "\t\t3- Remover: \n";
    cout << "\t\t4- Remover na posicao: \n";
    cout << "\t\t5- Remover a partir da posicao: \n";
    cout << "\t\t6- buscar: \n";
    cout << "\t\t0 - Sair\n\n";
    cout << "Escolha uma opcao: ";
}

int main()
{
    int pos = 0;
    int id = 0;
    int opcao = -1;
    DuplamenteEncadeada l;
    
    do{
        menu();
        cin >> opcao;
        
        switch(opcao){
            case 1:
                l.insert();
                break;
            case 2:
                cout << "posicao pra inserir: ";
                cin >> pos;
                l.insert(pos);
                break;
            case 3:
                l.remover();
                break;
            case 4:
                cout << "posicao pra remover: ";
                cin >> pos;
                l.remover(pos);
                break;
            case 5:
                cout << "primeira posicao pra remover: ";
                cin >> pos;
                l.removerDois(pos);
                break;
            case 6: 
                cout << "qual id que ce quer buscar:";
                cin >> id;
                l.buscar(id);
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Nao tem essa opcao!\n";
        }
        l.imprimir();
    }while(opcao != 0);

    return 0;
}
