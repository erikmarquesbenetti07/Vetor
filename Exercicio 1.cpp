#include <stdio.h>
#include <iostream>
using namespace std;

#define TAM 20 //define constante

int main() {
    int vet1[TAM], vet2[TAM], vet3[TAM*2], i;

    //ler valores para o primeiro vetor
    for (i = 0; i < TAM; i++) {
        cin>>vet1[i];
    }

    //ler valores para o segundo vetor
    for (i = 0; i < TAM; i++) {
        cin>>vet2[i];
    }

    //preencher o terceiro vetor
    for (i = 0; i < TAM; i++) {
        vet3[i*2] = vet1[i];
    }
    for (i = 0; i < TAM; i++) {
        vet3[i*2+1] = vet2[i];
    }

    //mostra valores para o segundo vetor
    cout<<"Vetor 1: ";
    for (i = 0; i < TAM; i++) {
        cout<<vet1[i];
    }
    cout<<"\n";

    //mostra valores para o segundo vetor
    cout<<"Vetor 2: ";
    for (i = 0; i < TAM; i++) {
        cout<<vet2[i];
    }
    cout<<"\n";

    //mostra valores para o terceiro vetor
    cout<<"Vetor 3: ";
    for (i = 0; i < TAM*2; i++) {
        cout<<vet3[i];
    }

    return 0;
}
