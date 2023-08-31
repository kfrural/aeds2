#include <cstdlib>
#include "Livro.h"
#include "ListaContigua.h"

using namespace std;

void menuOpcoes() {
    cout << "\n\t\t------------------------------" << endl;
    cout << "\t\t             Menu               " << endl;
    cout << "\t\t 1 - Inserir(1) "          << endl;
    cout << "\t\t 2 - Inserir(posicao)  "   << endl;
    cout << "\t\t 3 - Remover(1) "          << endl;
    cout << "\t\t 4 - Remover(posicao)    " << endl;
    cout << "\t\t 5 - Buscar por isbn do livrinho  " << endl;
    cout << "\t\t 6 - Buscar por isbn do livrinho(binario)  " << endl;
    cout << "\t\t S - Sair "                << endl;
    cout << "\t\t--------------------------------"<< endl;
    cout << "\t\tEscolhar uma opcao:";
}

int main() {
    int pos;
    char opcao = 's';
    ListaContigua l;

    do {
        menuOpcoes();
        cin >> opcao;
        cout << "\t\t----------------------------\n";

        switch (opcao) {
            case '1':
                l.insert();
                break;
            case '2':
                cout << "Posicao da insercao:";
                cin >> pos;
                l.insert(pos);
                break;
            case '3':
                l.remove();
                break;
            case '4':
                cout << "Posicao da remocao:";
                cin >> pos;
                l.remove(pos);
                break;
            case '6':
                int isbnBin = -1;
                cout << "Informe o isbn do livrinho procurado:";
                cin >> isbnBin;
                int indexBin = l.buscaBinaria(isbnBin);
                if(indexBin != -1)
                    cout << "Livrinho encontrado na posicao ["<<indexBin<<"]"<<endl;                    
                
                    
                break;
          /*  case '5':
                int isbn = -1;
                cout << "Informe o isbn do livrinho procurado:";
                cin >> isbn;
                int index = l.buscar(isbn);
                if(index != -1)
                    cout << "Livrinho encontrado na posicao ["<<index<<"]"<<endl;                    
                
                    // TA COMENTADA PQ ESE TREM N QUER FUNCIONAR, IGUAL O ERRO DA SUA LA
                    // PRA VER DESCOMENTA ESSA E COMENTA A CASE 6
                break;*/
            
        }
        l.imprimir();
    } while (opcao != 's' && opcao!='S');

    return 0;
}

