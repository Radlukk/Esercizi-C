
void printlist(lista_t *head){

  while(head){
    printf("%d ", head->num);
    head = head->next;
  }
  printf("\n");
}
