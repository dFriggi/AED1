#include <stdio.h>

int main(){
    int j, min, x;
    int tam = 3, v[tam];

    v[0] = 3;v[1] = 1; v[2] = 2;

    for (int i = 0; i < tam; i++){
        printf("%d\n", v[i]);
    }

    for (int i = 0; i < tam-1; i++){
        min = i;
        for (int j = i+1; j < tam; j++){
            if (v[j] < v[min]) min = j;
        }

        x = v[i];
        v[i] = v[min];
        v[min] = x;
    }

    for (int i = 0; i < tam; i++){
        printf("%d\n", v[i]);
    }
     
    return 0;
}