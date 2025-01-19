#include <stdio.h>

#define DIM 100

int attacco(char []);

int main(int argc, char * argv[]){

  int i;
  char seq[DIM + 1];
 
  printf("Insert string:");
  scanf("%s", seq);
  printf("%s\n", seq);
  i = attacco(seq);
  printf("%d\n", i);

  return 0;
}

int attacco(char seq[]){

  int i;
  char c;

  c = '*';
  for(i = 0; i < DIM; i++){
    if((seq[i] >= 'A' && seq[i] <= 'z')){
      if(!i){
        c = seq[i];
      }
      else if(seq[i-1] < 'A' || seq[i-1] > 'z'){
        if(seq[i] != c && c == '*'){
          c = seq[i];
        }
        else if(seq[i] != c){
          return 0;
        }
      }
    }
  }
  return 1;
}
