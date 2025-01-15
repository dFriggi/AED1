#include <stdio.h>

int main(){
    int times;
    int x, y;
    float result;


    scanf("%d", &times);

    for (int i = 0; i < times; i++){
        
        scanf("%d %d", &x, &y);

        result = (float)x / (float)y;

        if(y == 0) printf("divisao impossivel\n");
        else printf("%.1f\n", result);
    }
    
}
