#include <stdio.h>
 
int main() {
    int cases;
    scanf("%d", &cases);
    
    while(cases--){
        int n, primo = 0;
        scanf("%d", &n);
        
        for(int i = 2; i <= n/2; i++){
            if(n % i == 0) primo = 1;
        }
        
        if(primo) 
            printf("%d nao eh primo\n", n);
        else 
            printf("%d eh primo\n", n);
    }
    
    return 0;
}
