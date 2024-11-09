// #define <stdio.h>
// #define <stlib.h>

/* typedef struct lista_s {

	int n;
	struct lista_s * next;

}lista_t; */

void append(lista_t *head; int n){

	lista_t *elem = NULL;
	
	while(head->next){
		head = head->next;
	}

	elem = (lista_t *)malloc(sizeof(lista_t));
	head->next = elem;
	elem->next = NULL;
	elem->num = n;

}