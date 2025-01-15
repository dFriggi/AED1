#include <stdio.h>
#include <stdlib.h>

int main(){
    int width, height, treasure=0, fail=0;
    scanf("%d", &width);
    scanf("%d", &height);

    char mat[height][width];
    int matAux[height][width];

    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            scanf(" %c", &mat[i][j]);
        }
    }
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            matAux[i][j] = 0;
        }
    }

    int i=0, j=0;
    char direction='.';
    while(treasure == 0 || fail == 0){

        if (i < 0 || i >= height || j < 0 || j >= width){ fail = 1; break;}

        if(matAux[i][j] > 1 && mat[i][j] != '.'){ fail = 1; break;}

        matAux[i][j]++; 

        if (mat[i][j] == '>') direction = '>';
        if (mat[i][j] == 'v') direction = 'v';
        if (mat[i][j] == '^') direction = '^';
        if (mat[i][j] == '<') direction = '<';

        if(mat[i][j] == '*'){ treasure = 1; break;}

        if(direction == '.'){ fail = 1; break;}
        if(mat[i][j] == '.' || mat[i][j] == direction){
            if(direction == '>') j++;
            if(direction == 'v') i++;
            if(direction == '^') i--;
            if(direction == '<') j--;
        }
    }
    
    if(treasure == 1) printf("*\n");
    if(fail == 1) printf("!\n");
    
}
