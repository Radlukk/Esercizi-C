/* #include <stdio.h>
 * #include <stdlib.h>
 * #include <list.h> */

lista_t * delete(lista_t *head, lista_t *elemdel){

  lista_t *ptr;
  ptr = head;

  if(head == elemdel){
    free(head);
    return NULL;
  }

  while(ptr && (ptr->next != elemdel))
    ptr = ptr->next;

  if(ptr){
    ptr->next = elemdel->next;
    free(elemdel);
  }
  else{
    printf("ELEMENT NOT FOUND!");
  }

  return head;
}
