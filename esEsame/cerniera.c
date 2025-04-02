#include <stdio.h>

int cerca_cerniera(char [], char []);
void cerniera(char [], char[], char [], int);

int main(int argc, char * argv[]{

    char *s1, *s2, s3[101];
    int inizio;

    if(argc < 3){
        printf("errore: argomenti mancanti\n");
        return 0;
    }

    s1 = argv[1];
    s2 = argv[2];

    inizio = cerca_cerniera(s1, s2);
    cerniera(s1, s2, s3, inizio);
    printf("%s\n", s3);

    return 0;
}

int cerca_cerniera(char s1[], char s2[]){

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

void cerniera(char s1[], char s2[], char s3[], int inizio){

    int x, i;

    i = inizio;
    while(s2[i] != '\0'){
        i++;
    }

    x = i;
    i = 0;
    while(s1[x+i] != '\0'){
        s3[i] = s1[x+i];
        i++;
    }
    x = 0;
    while(x < inizio){
        s3[i+x] = s2[x];
        x++;
    }
    s3[i+x] = '\0';
}
