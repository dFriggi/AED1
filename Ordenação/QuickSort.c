#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 400000
#define STEP 20000

int separa(int vet[], int left, int right){
    int pivot = vet[right];
    int j = left-1, aux;

    for (int i = left; i < right; i++){
        if(vet[i] <= pivot){
            j++;
            aux = vet[j];
            vet[j] = vet[i];
            vet[i] = aux;
        }
    }
    
    j++;
    aux = vet[j];
    vet[j] = vet[right];
    vet[right] = aux;

    return j;
}

void quickSort(int vet[], int left, int right){
    int pivot;
    
    if(left < right){
        pivot = separa(vet, left, right);
        quickSort(vet, left, pivot-1);
        quickSort(vet, pivot+1, right);
    }
}



int main(){
    int t, left, right;

    //Aleatoriedade
    srand((unsigned)time(NULL));

    for (int i = 1; i <= TAM/STEP; i++){

        int *vet = malloc(sizeof(int)*STEP*i);

        //Aloca valores no vetor
        for (int j = 0; j < STEP*i; j++){
        vet[j] = rand()%TAM;
        }

        right = STEP*i-1;
        left = 0;

        t = clock();

        quickSort(vet, left, right);

        t = clock() - t;

        printf("QuickSort (%d iteracoes): %d ms\n--------------------------------------\n", STEP*i, t);

        free(vet);
    }
    
}
