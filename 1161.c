#include <stdio.h>

int main() {
    int M, N;
    
    while (scanf("%d %d", &M, &N) != EOF) {
        long long int fatorialM = 1, fatorialN = 1;
        
        for (int i = 1; i <= M; i++) {
            fatorialM *= i;
        }
        
        for (int i = 1; i <= N; i++) {
            fatorialN *= i;
        }
        
        long long int resultado = fatorialM + fatorialN;
        
        printf("%lld\n", resultado);
    }
    
    return 0;
}
