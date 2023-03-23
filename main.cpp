#include <iostream>

using namespace std;

void imprimeVet(int vet[], int n){
    for(int i=0; i<n; i++){
        cout<< vet[i] << " ";
    }cout << endl;
}
void troca(int * a, int * b){
    int aux = *a;
    *a = *b;
    *b = aux;

}

void BubbleSort(int vet[], int n){
    for(int i= n-1; i>=0; i--){
        for(int j=0; j< i; j++){
            if(vet[j]> vet[j+1]){
                troca(&vet[j], &vet[j+1]);
            }
        }
    }

}

void SelectSort(int vet[], int n){
    for(int i=0; i<n; i++){
        
    }
}
int main()
{
    int n= 5;
    int vet[n] = {4, 2, 3, 6, 1};
    imprimeVet(vet, n);
    BubbleSort(vet, n);
    imprimeVet(vet, n);
    return 0;
}
