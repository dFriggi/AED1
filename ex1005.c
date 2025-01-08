#include <stdio.h>
 
int main() {
    double i, j;
    scanf("%lf", &i);
    scanf("%lf", &j);
 
    double sum = (i*3.5) + (j*7.5);
 
    printf("MEDIA = %.5lf\n", sum/11);
 
    return 0;
}
