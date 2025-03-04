#include <stdio.h>

void istogr(int , char);

int main(){

  int num;
  char c, tr;

  printf("inserire numero:");
  scanf("%d", &num);
  scanf("%c", &tr);
  printf("inserire carattere");
  scanf("%c", &c);

  istogr(num, c);

  return 0;
}

void istogr(int val, char ch){

  int schema[10], num, cifra, i;
  num = val;

  for(i = 0; i < 10; i++)
    schema[i] = 0;

  while(num){
    cifra = num%10;
    num /= 10;
    schema[cifra]++;
  }

  for(i = 0; i < 10; i++){
    printf("%d : ", i);
    while(schema[i]--){
      printf("%c", ch);
    }
    printf("\n");
  }
}
