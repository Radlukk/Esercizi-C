#include <stdio.h>
#include <stdlib.h>
#include <list.h>

lista_t * append(lista_t *, int);
lista_t * mklist(lista_t *);
lista_t * delete(lista_t *, lista_t *);
lista_t * listapicchi(lista_t *);
void printlist(lista_t *);

int main(int argc, char *argv[]){

  lista_t * head = NULL;

  head = mklist(head);
  printlist(head);

  head = listapicchi(head);
  printlist(head);

  return 0;
}

lista_t * listapicchi(lista_t * h){

  lista_t * ptr, *pin;
  ptr = h;

  while(ptr){
    if(ptr->next != NULL && ptr->num <= ptr->next->num){
      pin = ptr;
      ptr = ptr->next;
      h = delete(h, pin);
    }
    else
      ptr = ptr->next;
  }

  return h;
}

#include "append.c"
#include "mklist.c"
#include "delete.c"
#include "printlist.c"
