#include <stdio.h>

int prossimo_intero(int);

int main(int argc, char * argv[]){

  int num, ris;

  printf("Numero ini base otto:");
  scanf("%d", &num);

  ris = prossimo_intero(num);
  printf("ris = %d\n", ris);

  return 0;
}

int prossimo_intero(int num) {
    int result = 0;
    int place = 1;

    // Processa il numero cifra per cifra
    while (num > 0) {
        int digit = num % 10; // Estrae l'ultima cifra
        num /= 10;            // Rimuove l'ultima cifra dal numero

        // Sostituisci la cifra con la successiva
        if (digit == 0) {
            digit = 1;
        } else if (digit == 7) {
            digit = 0;
        } else {
            digit += 1;
        }

        // Costruisce il risultato
        result += digit * place;
        place *= 10;
    }

    return result;
}

