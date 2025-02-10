#include <stdio.h>
#include <limits.h> 
 
int main() {
    long long vet[100], max = INT_MIN, index;
    
    for(int i = 0; i < 100; i++){
        scanf("%lld", &vet[i]);
    }
    
    for(int i = 0; i < 100; i++){
        if(vet[i] > max){
            max = vet[i];
            index = i;
        }
    }
    
    printf("%lld\n%d\n", max, index+1);
    
    return 0;
}
