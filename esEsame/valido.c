#include <stdio.h>
#define DIM 20

int valido(char *, int, int, char *);

int main(int argc, char * argv[]){

  int max, i, min;
  char spec[] = {'%', '#', '$', '&', '\0'};
  char nome[DIM+1];
  char trash[2];
  min = 8;
  max = 15;

  printf("Inserire nome: ");
  gets(nome);
  i = valido(nome, min, max, spec);
  if(!i){
    printf("no\n");
  }
  while(!i){
    printf("Inserire nome: ");
    gets(nome);
    i = valido(nome, min, max, spec);
  }
  printf("%s sei un coglione\n", nome);
}

int valido(char * nome, int min, int max, char * spec){

  int i, j, ris;
  i = 0;
  ris = 0;

  if(!nome){
    return 0;
  }

  while(*(nome+i) != '\0'){
    j = 0;
    while(*(spec+j) != '\0' && !ris){
      if(*(nome+i) == *(spec+j)){
        ris = 1;
      }
      j++;
    }
    i++;
  }

  if(ris && (i <= min && i >= max)){
    ris = 0;
  }

  return ris;
}
