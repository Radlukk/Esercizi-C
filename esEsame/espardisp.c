#include <stdio.h>

void cifreparidispari(int, int *, int *);

int main(){

  int num, par, disp;

  printf("immetti numero:");
  scanf("%d", &num);

  cifreparidispari(num, &par, &disp);
  printf("pari = %d\ndispari = %d\n", par, disp);

  return 0;
}

void cifreparidispari(int num, int * npar, int * ndisp){

  int par, dis, posp, posd, val;
  par = 0;
  dis = 0;
  posp = posd = 1;

  if(num){
    while(num){
      val = num%10;
      num /= 10;
      dis = dis + val*posd;
      posd *= 10;
      if(num){
        val = num%10;
        num /= 10;
        par = par + val*posp;
        posp *= 10;
      }
    }
    *npar = par;
    *ndisp = dis;
  }
  else{
    *npar = 0;
    *ndisp = dis;
  }
}
