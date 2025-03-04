
#include <stdio.h>
#include <string.h>

char cerca_char(char str[], int dim);

int main(int argc, char * argv[]){

  int d, i;
  char c;

  for(i = 1; i < argc; i++){
    d = strlen(argv[i]);
    c = cerca_char(argv[i], d);
    printf("%c\n", c);
  }

  return 0;
}

char cerca_char(char str[], int dim){

  int i, j, ok;

  for(i = 0, ok = 0; !ok && i < dim; i++){
    if(i < dim/2){
      for(j = dim/2, ok = 1; ok && j < dim; j++){
        if(str[i] == str[j])
          ok = 0;
      }
    }
    else{
      for(j = 0, ok = 1; ok && j < dim/2; j++){
        if(str[i] == str[j])
          ok = 0;
      }
    }
  }

  return str[i];
}
