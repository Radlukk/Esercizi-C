#include <stdio.h>
int combina(int, int);

int main(int argc, char * argv[]){

  int n1, n2, ris;

  printf("inserire un numero intero positivo:");
  scanf("%d", &n1);
  printf("inserire un numero intero positivo:");
  scanf("%d", &n2);

  ris = combina(n1, n2);
  printf("%d\n", ris);

  return 0;
}

int combina(int primo, int secondo){

  int comb, pos, cifra;
  pos = 1;
  comb = 0;

  while(primo || secondo){
    if(primo){
      cifra = primo%10;
      primo /= 10;
      comb = comb + cifra*pos;
      pos *= 10;
    }
    if(secondo){
      cifra = secondo%10;
      secondo /= 10;
      comb = comb + cifra*pos;
      pos *= 10;
    }
  }

  return comb;
}
