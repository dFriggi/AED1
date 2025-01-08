#include <stdio.h>
 
int main() {
    int num, qtd;
    double valor;
    
    scanf("%d", &num);
    scanf("%d", &qtd);
    scanf("%lf", &valor);

    double sal = valor * (double)qtd;
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, sal);

    return 0;
}
