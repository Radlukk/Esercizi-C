#include <stdio.h>

int main(int argc, char *argv[]){

    int numf, numfclose, numfvoid, maxc, c;
    char bigf[1000];
    FILE * fin;
    maxc = 0;

    numf = argc;
    argc--;

    while(argc){
        fin = fopen(agrv[argc], "r");
        if(fin){
            while(feof(fin)){
                c++;
            }
            if(!c){
                numfvoid++;
            }
            else if(c > maxc){
                bigf = argv[argc];
            }
            fclose(fin);
        }
        else{
            numfclose++;
        }
        argc--;
    }

    printf("...");
}