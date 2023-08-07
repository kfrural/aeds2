#include <iostream>
#include "AnimalEstimacao.h"

using namespace std;

void QualEhMaisPesado(AnimalEstimacao animal1, AnimalEstimacao animal2){
    if(animal1.getPeso() > animal2.getPeso()){
        cout << "O mais pesado eh o de especie: " << animal1.getEspecie();
    }else if(animal1.getPeso() < animal2.getPeso()){
        cout << "O mais pesado eh o de especie: " << animal2.getEspecie();
    }else{
        cout << "As duas tem o mermo peso";
    }
}

int main()
{
    AnimalEstimacao animal1;
    AnimalEstimacao animal2;
    animal1.fill();
    //animal1.print();
    animal2.fill();
    //animal2.print();
    QualEhMaisPesado(animal1, animal2);
    return 0;
}
