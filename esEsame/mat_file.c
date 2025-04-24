#include <stdio.h>
#include <stdlib.h>

void printmat(int *, int, int);
int * readmat(FILE *, int, int);

int main(int argc, char * argv[]){

  int * mat, nc, nr;
  FILE *fin;

  fin = fopen(argv[1], "r");

  if(!fin){
    printf("ERRORE di apertura file\n");
  }
  else{
    nr = atoi(argv[2]);
    nc = atoi(argv[3]);

    mat = readmat(fin, nr, nc);
    printmat(nr, nc);
  }

  return 0;
}

void printmat(int *mat, int righe, int colonne){

  int i, j;

  for(i = 0; i < righe; i++){
    for(j = 0; j < colonne; j++){
      printf("%d ", *(mat + i + j);
    }
    printf("\n");
  }
}

int * readmat(FILE * fin, int righe, int colonne){

  char c;
  int mat[righe][colonne], i, j, num, rep;
  i = 0;
  j = 0;

  fscanf(fin, "%c", &c);
  while(c){
    fscanf(fin, "%d %d", &num, &rep);
    while(rep--){
      mat[i][j++] = num;
      if(j == colonne){
        j = 0;
        i++;
      }
    }
  }

  return mat;
}
