#include <stdio.h>

int main() {
    int num, sum;

    scanf("%d", &num);

    
    while (num != 0) {
        sum = 0; 

        for (int i = 0; i < 5; ) {
            if (num % 2 == 0) { 
                sum += num;
                i++; 
            }
            num++;
        }

        
        printf("%d\n", sum);

        
        scanf("%d", &num);
    }

    return 0;
}
