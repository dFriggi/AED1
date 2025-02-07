#include <stdio.h>

int main() {
    double n1, n2, n3, n4, media, exame;
    
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10.0;
    
    printf("Media: %.1lf\n", media);
    
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        
        media = (media + exame) / 2.0;
        
        if (media >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", media);
    }
    
    return 0;
}
