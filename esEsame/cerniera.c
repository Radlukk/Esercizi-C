#include <stdio.h>

int cerniera(char s1[], char s2[]){

    int pos, i, j, k;
    i = 0;
    pos = -1;

    if(s2 == NULL || s1 == NULL){
        return pos;
    }

    while(s1[i] != '\0' && pos == -1){ // questo primo ciclo è in eccesso e postrebbe essere rimosso
        j = i;
        while(s2[j] != '\0' && pos == -1){
            if(s2[j] == s1[i]){
                pos = j;
                k = 1;
                while(pos != -1 && s2[j+k] != '\0' && s1[i+k] != '\0'){
                    if(s2[j+k] != s1[i+k]){
                        pos = -1;
                    }
                    k++;
                }
                if(s1[i+k] == '\0'){
                    pos = -1;
                }
            }
            j++;
        }
    }
    if(j == 0){
        pos = -1;
    }

    return pos; // pos per posizione
}