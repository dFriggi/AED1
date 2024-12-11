#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 400000
#define STEP 20000

void intercala(int p, int q, int r, int v[]){
    int *w, i=p, j=q, k=0;
    w = malloc((r-p)*sizeof(int));

    while (i < q && j < r){
        if (v[i] <= v[j]) w[k++] = v[i++];
        else w[k++] = v[j++];
    }

    while (i < q) w[k++] = v[i++];
    while (j < r) w[k++] = v[j++];
    
    for (i = p; i < r; i++) v[i] = w[i-p];
    
    free(w);
}

void mergeSort(int p, int r, int v[]){
    if (p < r - 1){
        int q = (p + r)/2;

        mergeSort(p, q, v);
        mergeSort(q, r, v);
        intercala(p, q, r, v);//Outra função que vai ordenar as duas metades do vetor v e as organiza
    }
}

int main(){
    clock_t t;
    
    //aleatoriedade
    srand((unsigned)time(NULL));

    for (int i = 1; i <= TAM/STEP; i++){
    
        int *v = malloc(sizeof(int)*STEP*i);

        //adiciona valores no vetor
        for (int j = 0; j < STEP*i; j++){
            v[j] = rand()%TAM;
        }

        //armazena o tempo
        t = clock();
        mergeSort(0, STEP*i, v);
        t = clock() - t;


        printf("Tempo de execucao (%d iteracoes): %.6lf ms\n", STEP*i,((double)t)/((CLOCKS_PER_SEC/1000)));
    }
}   
