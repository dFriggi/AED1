#include <stdio.h>
 
int main() {
    double raio;
    scanf("%lf", &raio);
    
    double vol = (raio*raio*raio) * 3.14159 * (double)4/3;
    
    printf("VOLUME = %.3lf\n", vol);
 
    return 0;
}
