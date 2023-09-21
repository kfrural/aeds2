#include <iostream>
#include "DuplamenteEncadeada.h"

using namespace std;

void menu(){
    cout << "\t\t---------MENU---------\n\n";
    cout << "\t\t1- Inserir: \n";
    cout << "\t\t2- Inserir na posicao:\n ";
    cout << "\t\t3- Remover: \n";
    cout << "\t\t4- Remover na posicao: \n";
    cout << "\t\t5- buscar: \n";
    cout << "\t\ts - Sair\n\n";
    cout << "Escolha uma opcao: ";
}

int main()
{
    int pos = 0;
    char opcao = 's';
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
            /*case 5: 
                l.buscar();
                break;*/
        }
        l.imprimir();
    }while(opcao == 's' || opcao == 'S');

    return 0;
}
