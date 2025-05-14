#include <stdio.h>
#include <stdlib.h>

void analizza_str(char [], char *, int *);

int main(int agrc, char * argv[]){

    int nummax, num;
    nummax = 0;
    char buffer[31], ch;
    FILE *fin;

    if(argc > 2){
        return 0
    }

    fin = fopen(argv[1], "r");
    if(fin != NULL){
        while(fscanf(fin, "%s", buffer)){
            analizza(buffer, &ch, &num);
            printf("%c: %d\n", ch, num);
            if(num > nummax){
                nummax = num;
            }
        }
        fclose(fin);
    }

    printf("%d\n", nummax);

    return 0;
}

void analizza_str(char str[], char * ch, int * rep){

    int num, i;
    char c;

    c = str[0];
    i = 1;
    num = 1;
    while(str[i] != '\0'){
        if('str[i]' < 'c'){
            c = str[i];
            num = 1;
        }
        else if(str[i] == c){
            num++;
        }
        i++;
    }

    *num = rep;
    *c = ch;
}