#include <stdio.h>

int compLinha(int m[9][9]){
  int aux[9];
    for(int i = 0; i < 9; i++){
      
      for(int k = 0; k < 9; k++){
        aux[k] = 0;
      }//zera a matriz auxiliar
      
      for(int k = 0; k < 9; k++){
          aux[m[i][k]-1]++;
      }//adicionando a quantidade de vezes que cada numero aparece na linha

      for(int k = 0; k < 9; k++){
        if(aux[k] != 1){
          return 0;
        } else continue;        
      }//confere se cada número aparece no máximo uma vez na linha da matriz
      
    } 
  return 1;  
}

int compColuna(int m[9][9]){
  int aux[9];
    for(int i = 0; i < 9; i++){

      for(int k = 0; k < 9; k++){
        aux[k] = 0;
      }//zera a matriz auxiliar

      for(int k = 0; k < 9; k++){
          aux[m[k][i]-1]++;
      }//adicionando a quantidade de vezes que cada numero aparece na coluna

      for(int k = 0; k < 9; k++){
        if(aux[k] != 1){
          return 0;
        } else continue;        
      }//confere se cada número aparece no máximo uma vez na coluna da matriz

    } 
  return 1;  
}

int compRegiao(int m[9][9]){
  int aux[9];

    for(int i = 0; i < 7; i += 3){//dessa maneira ela itera pelo primeiro endereço da linha da região
      for(int k = 0; k < 7; k += 3){
        
          for(int j = 0; j < 9; j++){
            aux[j] = 0;
          }//zera a matriz auxiliar

          for(int j = i; j < i + 3; j++){
            for(int l = k; l < k + 3; l++){
              aux[m[j][l]-1]++;
            }
          }//adiciona a quantidade de vezes que cada numero aparece na região
        
          for(int j = 0; j < 9; j++){
            if(aux[j] != 1){
              return 0;
            } else continue;
          }//confere se cada número aparece no máximo uma vez na região da matriz
      }
      
    }
  return 1;
}

int main(){
  int n, mat[9][9], qtd;
  scanf("%d", &n);
    for(qtd = 0; qtd < n; qtd++){

        for(int k = 0; k < 9; k++){
            for(int j = 0; j < 9; j++){
                mat[k][j] = 0;
            }        
        }//zera a matriz a cada matriz nova
      
        for(int k = 0; k < 9; k++){
            for(int j = 0; j < 9; j++){
                scanf("%d", &mat[k][j]);
            }        
        }//recebe os valores da matriz atual

        if(compLinha(mat) == 0 || compColuna(mat) == 0 || compRegiao(mat) == 0){
          printf("Instancia %d\nNAO\n\n", qtd+1);
        } else printf("Instancia %d\nSIM\n\n", qtd+1);
    }
   
}
