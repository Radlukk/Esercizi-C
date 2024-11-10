// #define <stdio.h>
// #define <stlib.h>

/* typedef struct lista_s {

	int n;
	struct lista_s * next;

}lista_t; */

lista_t * append(lista_t *head; int n){

	lista_t *elem, ptr;
	elem = (lista_t *)malloc(sizeof(lista_t));
	elem->next = NULL;
	elem->num = n;
	
	if(head){
		ptr = head;
		while(ptr->next){
			ptr = ptr->next;
		}
		ptr->next = elem;
	}
	else {
		head = elem;
	}
	return head;
}
