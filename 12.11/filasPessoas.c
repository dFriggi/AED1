#include <stdio.h>
#include <stdlib.h>

struct cel{
    int cont;
    struct cel *seg;
};

typedef struct cel celula;

void push(celula *listaPessoas, int num, celula **aux){
    celula *novo;
    novo = malloc(sizeof(celula));
    novo->cont = num;
    novo->seg = NULL;

    (*aux)->seg = novo;
    *aux = novo;  // Inserir o novo nó no final
}

void pop(celula *listaPessoas, int num){
    celula *atual, *prox;

    atual = listaPessoas;
    prox = listaPessoas->seg;

    while (prox != NULL && prox->cont != num){
        atual = prox;
        prox = prox->seg;
    }

    if (prox != NULL) {  // Verifica se o elemento foi encontrado
        atual->seg = prox->seg;
        free(prox);
    }
}

void imprime(celula *listaPessoas){
    celula *p;
    for (p = listaPessoas->seg; p != NULL; p = p->seg){
        printf("%d ", p->cont);
    }
}

int main(){
    int qtdPush, qtdPop, numPush, numPop;

    celula *listaPessoas = malloc(sizeof(celula));
    listaPessoas->seg = NULL;  // Inicializando a lista com o ponteiro de cabeça nulo
    celula *aux = listaPessoas;

    scanf("%d", &qtdPush);

    for (int i = 0; i < qtdPush; i++){
        scanf("%d", &numPush);
        push(listaPessoas, numPush, &aux);
    }

    scanf("%d", &qtdPop);

    for (int i = 0; i < qtdPop; i++){
        scanf("%d", &numPop);
        pop(listaPessoas, numPop);
    }

    imprime(listaPessoas);

    return 0;
}
