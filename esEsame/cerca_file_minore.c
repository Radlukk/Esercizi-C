#include <stdio.h>
#define LINE 1000

int count_lines(char *);
char * findfile(slist_t *);

int main(){

  // codice

  return 0;
}

int count_lines(char * file){

  int ris, i;
  char c;
  FILE *fin;

  fin = fopen(file, "r");
  if(fin){
    i = 0;
    ris = 0;
    while(fscanf(fin, "%c", c) != EOF){
      i++;
    }
    ris = i/LINE;
    if(i%LINE){
      ris++;
    }

    fclose(fin);
  }
  else{
    ris = -1;
  }

  return ris;
}

char * findfile(slist_t * head){

  int maxlines, lines;
  char *bigfile = '\0';
  maxlines = 0;

  lines = count_lines(head->nomefile);
  if(lines > maxlines){
    maxlines = lines;
    bigfile = head->nomefile;
  }
  head = head->next;

  return bigfile;
}
