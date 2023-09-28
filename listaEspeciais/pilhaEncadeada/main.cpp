#include <iostream>
#include "PilhaDuplamenteEncadeada.h"

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
    PilhaDuplamenteEncadeada p;
    
    do{
        menu();
        cin >> opcao;
        
        switch(opcao){
            case 1:
                p.insert();
                break;
            case 2:
                cout << "posicao pra inserir: ";
                cin >> pos;
                p.insert(pos);
                break;
            case 3:
                p.remove();
                break;
            case 4:
                cout << "posicao pra remover: ";
                cin >> pos;
                p.remove(pos);
                break;
            case 5:
                cout << "primeira posicao pra remover: ";
                cin >> pos;
                p.removerDois(pos);
                break;
            case 6: 
                cout << "qual id que ce quer buscar:";
                cin >> id;
                p.buscar(id);
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
