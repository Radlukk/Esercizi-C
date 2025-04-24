#include <stdio.h>

#define RMAX 10
#define CMAX 10

int conta_pozzi(int [][CMAX], int, int);
void stampaArray(int, int ,int [][CMAX]);

int main(){

  int map[RMAX][CMAX], i, j, r, c;

  printf("inserisci righe:");
  scanf("%d", &r);
  printf("inserisci colonne:");
  scanf("%d", &c);

  printf("inserisci mappa\n");
  for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
      scanf("%d", &map[i][j]);
    }
  }

  stampaArray(r, c, map);
  i = conta_pozzi(map, r, c);
  printf("%d\n", i);

  return 0;
}

int conta_pozzi(int mat[][CMAX], int rig, int cln){

  int count, i, j, k, h, ok;
  count = 0;

  if(!mat){
    printf("ERRORE\n");
    return 0;
  }

  for(i = 0; i < rig; i++){
    for(j = 0; j < cln; j++){
      ok = 1;
      for(k = 0; k < cln && ok; k++){ // controllo se è pozzo della sua righa
        if(k != j && mat[i][j] >= mat[i][k]){
          ok = 0;
        }
      }
      for(h = 0; h < rig && ok; h++){ // controll se è pozzo della colonna
        if(h != i && mat[i][j] >= mat[h][j]){
          ok = 0;
        }
      }
      if(ok){
        count++;
      }
    }
  }

  return count;
}

void stampaArray(int righe, int colonne, int array[][CMAX]) {
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
