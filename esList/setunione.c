#include <stdlib.h>
#include <stdio.h>
#include <list.h>

lista_t * append(lista_t *, int);
lista_t * setunione(lista_t *, lista_t *);
lista_t * insert_inc(lista_t *, int);
lista_t * mklist(lista_t *);
void printlist(lista_t *);

int main(){

  lista_t *head1, *head2, *head3;
  head1 = NULL;
  head2 = NULL;
  head3 = NULL;

  head1 = mklist(head1);
  head2 = mklist(head2);
  printlist(head1);
  printlist(head2);

  head3 = setunione(head1, head2);
  printlist(head3);

  return 0;
}

lista_t * setunione(lista_t * h1, lista_t * h2){

  lista_t *ptr1, *ptr2;
  lista_t *h3 = NULL;

  ptr1 = h1;
  ptr2 = h2;
  if(ptr1){
    if(ptr2){
      while(ptr1){
        h3 = insert_inc(h3, ptr1->num);
        ptr1 = ptr1->next;
      }
      while(ptr2){
        h3 = insert_inc(h3, ptr2->num);
        ptr2 = ptr2->next;
      }
      ptr1 = h3;
      while(ptr1 && ptr1->next){
        if(ptr1->num == ptr1->next->num){
          ptr2 = ptr1->next;
          ptr1->next = ptr2->next;
          free(ptr2);
        }
        else{ ptr1 = ptr1->next; }
      }
    }
    else { printf("seconda lista vuota\n"); }
  }
  else { printf("prima lista vuota\n"); }

  return h3;
}

lista_t * insert_inc(lista_t * head, int n){

  lista_t *elem, *h;
  h = head;
  elem = (lista_t *)malloc(sizeof(lista_t));
  elem->num = n;

  if(h == NULL){
    elem->next = NULL;
    return elem;
  }

  if(head->num >= n){
    elem->next = h;
    head = elem;
  }
  else{
    while(h->next && h->next->num < n){
      h = h->next;
    }
    elem->next = h->next;
    h->next = elem;
  }

  return head;
}

#include "append.c"
#include "mklist.c"
#include "printlist.c"
