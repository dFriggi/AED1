#include <stdio.h>

int main() {
    double num, sum=0;
    int pos=0;
    
    for (int i = 0; i < 6; i++) {
        scanf("%lf", &num);
        if (num > 0){ 
            pos++;
            sum += num;
        }
    }
    
    printf("%d valores positivos\n", pos);
    printf("%.1lf\n", sum/pos);
    
    return 0;
}
