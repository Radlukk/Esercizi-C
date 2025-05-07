#include <stdio.h>
#include <stdlib.h>

void frqcif(int, int *, int *);

int main(int argc, char * argv[]){

  int num, max, min;

  if(argc != 2){
    return 0;
  }

  num = atoi(argv[1]);
  printf("%d\n", num);
  frqcif(num, &max, &min);
  printf("cifra più comune: %d\ncifra meno comune: %d\n", max, min);

  return 0;
}

void frqcif(int val, int *max, int *min){

  int minc, maxc, mini, maxi, i;
  int ar[10];

  for(i = 0; i < 10; i++)
    ar[i] = 0;

  while(val){
    i = val%10;
    ar[i]++;
    val /= 10;
  }
  for(i = 0; i < 10; i++){
    printf("%d ", ar[i]);
  }
  printf("\n");

  maxc = 0;
  for(i = 0; i < 10; i++){
    if(ar[i] > maxc){
      maxc = ar[i];
      maxi = i;
    }
  }
  minc = maxc;
  for(i = 0; i < 10; i++){
    if(ar[i] < minc && ar[i]){
      minc = ar[i];
      mini = i;
    }
  }

  *max = maxi;
  *min = mini;
}

