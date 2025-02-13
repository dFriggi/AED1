#include <stdio.h>
#include <math.h>

void calcular_raizes(double a, double b, double c) {
    if (a == 0) {
        printf("Impossivel calcular\n");
        return;
    }
    
    double delta = b * b - 4 * a * c;
    
    if (delta < 0) {
        printf("Impossivel calcular\n");
        return;
    }
    
    double r1 = (-b + sqrt(delta)) / (2 * a);
    double r2 = (-b - sqrt(delta)) / (2 * a);
    
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
}

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    calcular_raizes(a, b, c);
    return 0;
}
