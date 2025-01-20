#include <stdio.h>

#define NC_MAPPA 5
#define NC_AREA 3

void trovamat(int map[][NC_MAPPA], int mat[][NC_AREA], int *y, int *x);
void stampaArray(int righe, int array[][righe]);
int main(){

  int map[NC_MAPPA][NC_MAPPA], mat[NC_AREA][NC_AREA], i, j, n;

  printf("inserisci mappa 5x5\n");
  for(i = 0; i < NC_MAPPA; i++){
    for(j = 0; j < NC_MAPPA; j++){
      scanf("%d", &n);
      map[i][j] = n;
    }
  }

  printf("inserisci matrice 3x3\n");
  for(i = 0; i < NC_AREA; i++){
    for(j = 0; j < NC_AREA; j++){
      scanf("%d", &n);
      mat[i][j] = n;
    }
  }

  stampaArray(NC_MAPPA, map);
  stampaArray(NC_AREA, mat);

  trovamat(map, mat, &i, &j);
  printf("risultato: (%d, %d)\n", i, j);

  return 0;
}

void stampaArray(int righe, int array[][righe]) {
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < righe; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void trovamat(int map[][NC_MAPPA], int mat[][NC_AREA], int *y, int *x){

  int i, j, k, h, ok;

  for(i = ok = 0; i < NC_MAPPA && ok == 0; i++){
    for(j = 0; j < NC_MAPPA && ok == 0; j++){
      if(map[i][j] == mat[0][0]){
        for(k = ok = 1; k < NC_AREA && ok; k++){
          for(h = 1; h < NC_AREA && ok; h++){
            if(map[i + k][j + h] != mat[k][h]){
              ok = 0;
            }
          }
        }
      }
    }
  }
  if(ok){
    *y = i;
    *x = j;
  }
  else{
    *y = -1;
    *y = -1;
  }
}
