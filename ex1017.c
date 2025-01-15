#include <stdio.h>
 
int main() {
    int vel, tem;
    
    scanf("%d", &vel);
    scanf("%d", &tem);
    
    int dist = vel * tem;
    
    double lit = (double)dist/(double)12;
    
    printf("%.3lf\n", lit);
    
    return 0;
}
