#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <list.h>

lista_t * append(lista_t *, int);
lista_t * mklist(lista_t *);
void printlist(lista_t *);
int iscube(int);

int main(int argc, char * argv[]){

  int i;
  lista_t *head, *ptr;
  head = NULL;

  head = mklist(head);
  printlist(head);
  ptr = head;

  while(ptr){
    if((i = iscube(ptr->num))){
      head = append(ptr, i);
      ptr = ptr->next;
    }
    ptr = ptr->next;
  }

  printlist(head);
  return 0;
  }

int iscube(int n){

  int ris, i;
  i = 1;

  if(n = 1)
    return 1;

  while(i <= n){
    i = pow(ris, 3);
    if(i == n)
      return ris;
    ris++;
  }

  return 0;
}

#include "append.c"
#include "mklist.c"
#include "printlist.c"
