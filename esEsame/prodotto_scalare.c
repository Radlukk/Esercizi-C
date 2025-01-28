#include <stdio.h>

float trova_vett(float *, float *, int, int, int *);

int main(){

  int i, index;
  float val, pesi[3];
  float array[] = {2.1, 4.5, 1.0, 3.3, 2.3, -1.4, 5.0};

  for(i = 0; i < 3; i++){
    printf("compila array di float:");
    scanf("%f", &pesi[i]);
  }
  for(i = 0; i < 3; i++)
    printf("%.1f ", pesi[i]);
  printf("\n");

  val = trova_vett(array, pesi, 7, 3, &index);
  printf("index = %d\nvalore = %.1f\n", index, val);

  return 0;
}

float trova_vett(float * valori, float * pesi, int dimv, int dimp, int *index){

  int i, j, imax;
  float valmax, val;

  if(dimp > dimv){
    *index = -1;
    return 0.0;
  }

  for(i = 0; i + dimp < dimv; i++){
    for(j = 0, val = 0; j < dimp; j++){
      val = val + (*(valori+i+j)) * (*(pesi+j));
    }
    if(i = 0){
      valmax = val;
      imax = i;
    }
    else if(val > valmax){
      valmax = val;
      imax = i;
    }
  }

  *index = imax;
  return valmax;
}
