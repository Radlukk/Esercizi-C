#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int numf, numfclose, numfvoid, maxc, c;
    char bigf[1000];
    FILE * fin;
    maxc = 0;
    numfclose = 0;
    numfvoid = 0;

    argc--;
    numf = argc;

    while(argc){
      fin = fopen(argv[argc], "r");
      if(fin){
        c = 0;
        int ch;
        while((ch = fgetc(fin)) != EOF){
          c++;
        }
        if(!c){
          numfvoid++;
        }
        else if(c > maxc){
          strcpy(bigf, argv[argc]);
          maxc = c;
        }
        fclose(fin);
      }
      else{
        numfclose++;
      }
      argc--;
    }

    printf("Number of listed files: %d\n", numf);
    printf("Number of unreadable files: %d\n", numfclose);
    printf("Number of void files: %d\n", numfvoid);
    printf("Longhest file %s\nNumber of character is %d\n", bigf, maxc);

    return 0;
}

