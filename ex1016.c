#include <stdio.h>
 
int main() {
    int num;
    scanf("%d", &num);
    
    int min = (num*60)/30;
 
    printf("%d minutos\n", min);
 
    return 0;
}
