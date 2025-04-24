#include <stdio.h>

int main(){

  int med, count, i;
  char c, file[100];
  FILE *fin;

  printf("File name: ");
  gets(file);

  if(!(fin = fopen(file, "r"))){
    return 0;
  }
  med = 0;
  count = 0;
  i = 0;

  while(!feof(fin)){
    fscanf(fin, "%c", &c);
    if(c == '*'){
      count++;
    }
    else{
      if(count){
        i++;
      }
      med += count;
      count = 0;
    }
  }

  med /= i;
  printf("med: %d\n", med);
  for(i = 0; i < med; i++){
    printf("*");
  }
  printf("\n");

  return 0;
}
