#include <stdio.h>
#include <string.h>

int main() {
    char nome[250];
    double sal, total;
    double vendas;
    
    gets(nome);
    scanf("%lf", &sal);
    scanf("%lf", &vendas);
    
    total = sal + (vendas*0.15);
    
    printf("TOTAL = R$ %.2lf\n", total);
    
    return 0;
}
