#include <stdio.h>
#include <string.h>

void ordena(char nomes[][21], int tam){
    int i, j;
    char aux[21];

    for(i = 1; i < tam; i++){
        strcpy(aux, nomes[i]);

        j = i - 1;
        while (j >= 0 && strcmp(nomes[j], aux) > 0) {
            strcpy(nomes[j + 1], nomes[j]);
            j--;
        }

        strcpy(nomes[j+1], aux);

    }
}

int main(){
    int k, n;
    scanf("%d %d", &n, &k);

    char nomes[n][21];
    getchar();
    for (int i = 0; i < n; i++){

        fgets(nomes[i], 21, stdin);//pega o nome
        nomes[i][strcspn(nomes[i], "\n")] = '\0';//coloca o \0 no final de cada nome

        while (strlen(nomes[i])==0){
            fgets(nomes[i], 21, stdin);
            nomes[i][strcspn(nomes[i], "\n")] = '\0';
        }
        
    }

    ordena(nomes, n);

    puts(nomes[k-1]);
    
    return 0;
}
