#include <stdio.h>
 
int main() {
 
    int x;
    double y;
    
    scanf("%d", &x);
    scanf("%lf", &y);
    
    double val = (double)x/y;
    
    printf("%.3lf km/l\n", val);
 
    return 0;
}
