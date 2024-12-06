/* #include <stdio.h>
 * #include <list.h> */

// lista_t *append(lista_t *, int);

lista_t * mklist(lista_t * head){

  int dim, num, i;

  printf("Insert dimention of the list: ");
  scanf("%d", &dim);

  for(i = 0; i < dim; i++){
    printf("new object: ");
    scanf("%d", &num);
    head = append(head, num);
  }

return head;
}
