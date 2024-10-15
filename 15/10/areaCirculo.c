#include <stdio.h>
 
int main() {
    double n = 3.14159, raio, area;
    scanf("%lf", &raio);
        area = raio * raio * n;
    printf("A=%.4lf\n", area);
    return 0;
}