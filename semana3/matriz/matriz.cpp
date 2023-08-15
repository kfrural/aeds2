#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void lerMatriz(int lin, int col, double **matriz){
    string caminhoPasta = "matriz.txt";
    ifstream arquivoLido("matriz.txt");
    //arquivoLido.open(caminhoPasta);
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            arquivoLido >> matriz[i][j];
        }
    }
    arquivoLido.close();
}

void printMatriz(int lin, int col, double **matriz){
    cout << "Matrizinha\n\n\n";
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int lin, col;
    lin = 4;
    col = 4;
    double **matriz = new double *[lin];
    for(int i = 0; i < lin; i++){
        matriz[i] = new double [col];
    }
    
    lerMatriz(lin, col, matriz);
    printMatriz(lin, col, matriz);
    
    return 0;
}
