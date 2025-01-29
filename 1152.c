#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct cel{
    int key;
    int visited;
} junct;

int min(junct *byteland, int verts){
    int minimum = INT_MAX, intIndex=-1;

    for (int i = 0; i < verts; i++){
        if(byteland[i].visited == 0 && byteland[i].key < minimum){
            minimum = byteland[i].key;
            intIndex = i;
        }
    }
    return intIndex;    
}

int primAlgorithm(int **mat, int verts){
    junct *byteland = (junct *)malloc(verts * sizeof(junct));

    for (int i = 0; i < verts; i++){
        byteland[i].key = INT_MAX;
        byteland[i].visited = 0;
    }
    byteland[0].key = 0;
    int totalCost = 0;

    for (int i = 0; i < verts; i++){
        int index = min(byteland, verts);
        totalCost += byteland[index].key;
        byteland[index].visited = 1;

        for (int j = 0; j < verts; j++){
            if(mat[index][j] && byteland[j].visited == 0 && mat[index][j] < byteland[j].key){
                byteland[j].key = mat[index][j];
            }
        }
        
    }
    free(byteland);

    return totalCost;
}

int main(){
    int verts, edges;

    while (1) {
        scanf("%d %d", &verts, &edges);
        if (verts == 0 && edges == 0) break;

        int **mat = (int **)malloc(verts * sizeof(int *));
        for (int i = 0; i < verts; i++) {
            mat[i] = (int *)calloc(verts, sizeof(int));
        }
    

        int cityA, cityB, cost, totalCost=0;
        for (int i = 0; i < edges; i++){
            scanf("%d %d %d", &cityA, &cityB, &cost);

            mat[cityA][cityB] = cost;
            mat[cityB][cityA] = cost;
            totalCost += cost;//calcula o preço total de todas as estradas
        }

        int treeCost = primAlgorithm(mat, verts);
    
        int total = totalCost - treeCost;
        printf("%d\n", total);

        for (int i = 0; i < verts; i++) {
            free(mat[i]);
        }
        free(mat);
    }
}
