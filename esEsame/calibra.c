#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 100

void calibra(char [], int *, int *);

int main(int argc, char * argv[]){

  int valuno, valdue;
  char seq[DIM+1];
  strcpy(seq, argv[1]);
  printf("%s\n", seq);

  calibra(seq, &valuno, &valdue);

  if(valuno > valdue){
    printf("%d\n", valuno);
  }
  else{
    printf("%d\n", valdue);
  }

  return 0;
}

void calibra(char seq[], int * numuno, int * numdue){

  int i, j, k;
  char str[3];

  i = 0;
  j = -1;

  while(seq[i] != '\0'){
    if(seq[i] >= '0' && seq[i] <= '9'){
      if(j < 0){
        j = i;
      }
      else{
        k = i;
      }
    }
    i++;
  }

  str[0] = seq[j];
  str[1] = seq[k];
  str[2] = '\0';

  i = atoi(str);
  *numuno = i;

  str[0] = seq[k];
  str[1] = seq[j];

  i = atoi(str);
  *numdue = i;
}
