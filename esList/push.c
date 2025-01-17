
void push(lista_t *elemad, int n){

  lista_t *elem;

  if(elemad){
    elem = (lista_t *)malloc(sizeof(lista_t));
    if(elem){
      elem->num = n;
      elem->next = elemad->next;
      elemad->next = elem;
    }
  }
}
