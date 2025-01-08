#include <stdio.h>
 
int main() {
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    double sum = (a*2) + (b*3) + (c*5);
    
    printf("MEDIA = %.1lf\n", sum/10);
    
    return 0;
}
