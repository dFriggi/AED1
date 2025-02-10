#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < 12; i++){
        if(n % 2 != 0 ) printf("%d\n", n);
    
        n++;
    }
 
    
    return 0;
}
