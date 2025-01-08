#include <stdio.h>
 
int main() {
    int cod1, pec1, cod2, pec2;
    float val1, val2;
    
    scanf("%d %d %f", &cod1, &pec1, &val1);
    scanf("%d %d %f", &cod2, &pec2, &val2);
 
    val1 = val1 * (float)pec1;
    val2 = val2 * (float)pec2;
    
    printf("VALOR A PAGAR: R$ %.2lf\n", val1 + val2);
 
    return 0;
}
