#include <stdio.h>

int main() {
    int C; 
    scanf("%d", &C);

    for (int i = 0; i < C; i++) {
        int N;
        scanf("%d", &N);

        int notas[N];
        int soma = 0;

        for (int j = 0; j < N; j++) {
            scanf("%d", &notas[j]);
            soma += notas[j];
        }

        double media = (double)soma / N;
        
        int acima_da_media = 0;
        for (int j = 0; j < N; j++) {
            if (notas[j] > media) {
                acima_da_media++;
            }
        }

        double percentual = (double)acima_da_media / N * 100;
        printf("%.3f%%\n", percentual);
    }

    return 0;
}
