#include <stdio.h>
#include <string.h>

void strcar(char [], int [], int, char []);

int main(int argc, char * argv[]){

  int i, dim;
  dim = strlen(argv[1]);
  int ar[dim];
  char str[100];

  for(i = 0; i < dim; i++){
    scanf("%d", &ar[i]);
  }
  strcar(argv[1], ar, dim, str);
  printf("%s\n", str);

  return 0;
}

void strcar(char car[], int rip[], int dim, char new[]){

  int dimcar, i, j, k;

  for(dimcar = 0, i = 0; i < dim; i++){
    dimcar = dimcar + rip[i];
  }

  char newcar[dimcar+1];
  i = 0;
  k = 0;

  while(car[i] != '\0'){
    for(j = 0; j < rip[i] && i < dim; j++){
      newcar[k] = car[i];
      k++;
    }
    i++;
  }
  newcar[k] = '\0';
  printf("ok\n");
  strcpy(new, newcar);
}
