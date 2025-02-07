#include <stdio.h>
 
int main() {
    double num; 
    int pos=0;
    
    for(int i = 0; i < 6; i++){
        scanf("%lf", &num);
        
        if(num > 0) pos++;
    }
    
    printf("%d valores positivos\n", pos);    
            
    return 0;
}
