#include <iostream>

using namespace std;

void insertion(int *vetor, int tam){
    int n, j;
    for(int i = 0; i < tam; i++){
        n = vetor[i];
        j = i - 1;

        while(j >= 0 && vetor[j] > n){
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = n;
    }
}

int main(){

    int tam = 5;
    int *vetor = new int[tam]{4,7,9,2,0};

    insertion(vetor, tam);

    for(int i = 0; i < tam; i++){
        cout << vetor[i] << endl;
    }

    return 0;
}
