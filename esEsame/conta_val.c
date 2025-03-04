#include <stdio.h>
#include <stdlib.h>

int contaval(FILE *, int);

int main(int argc, char * argv[]){

  int val, tot;
  FILE * fout, * fin;
  val = atoi(argv[1]);
  tot = 0;
  printf("Il valore schelto è %d\n", val);

  fout = fopen(argv[argc - 1], "w");
  if(fout){
    argc -= 2;
    while(argc > 1){
      fin = fopen(argv[argc], "r");
      if(fin){
        printf("apro: %s\n", argv[argc]);
        tot += contaval(fin, val);
        fclose(fin);
      }
      else{
        printf("ERRORE\n");
      }
      argc--;
    }
    fprintf(fout, "%d\n", tot);
    fclose(fout);
  }
  else{
    printf("ERRORE DI APERTURA FILE IN SCRITTURA\n");
  }

  return 0;
}

int contaval(FILE *fin, int val) {
    int count = 0;
    int currentVal;

    // Leggi i valori dal file uno per uno
    while (fscanf(fin, "%d", &currentVal) == 1) {
        if (currentVal == val) {
            count++;
        }
    }

    return count;
}
