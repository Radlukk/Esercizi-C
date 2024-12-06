#include <stdio.h>
#include <list.h>
#include <stdlib.h>

lista_t *mklist(lista_t *);
lista_t *append(lista_t *, int);
lista_t *delete(lista_t *, lista_t *);
void printlist(lista_t *);

int main(int argc, char * argv[]){

  int i, sum;
  lista_t *head = NULL;
  lista_t *ptr;

  head = mklist(head);
  ptr = head;
  printlist(head);

  while(ptr){
    if(ptr->next){
      sum = ptr->num + ptr->next->num;
      ptr->num = sum;
      head = delete(head, ptr->next);
      ptr = ptr->next;
    }
    else{
      ptr = ptr->next;
    }
  }
  printlist(head);

  return 0;
}

#include "append.c"
#include "printlist.c"
//#include "delete.c"
//#include "mklist.c"
