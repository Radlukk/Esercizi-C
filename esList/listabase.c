#include <list.h>
#include <stdio.h>
#include <stdlib.h>

lista_t * append(lista_t*, int);

int main(int argc, char * argv[]){

	int i, dim, j;
	lista_t * head = NULL;
	lista_t * ptr;

	printf("INSERT NUMBER OF THE LIST: ");
	scanf("%d", &dim);
 
	while(dim <= 0){
		printf("INSERT NUMBER OF THE LIST: ");
		scanf("%d", &dim);
	}

	for(i = 0; i < dim; i++){
		printf("INSERT NUMBER:");
		scanf("%d", &j);
		head = append(head, j);
	}

	ptr = head;
	while(ptr){
		j = ptr->num;
		printf("%d ", j);
		ptr = ptr->next;
	}
	
	printf("\n");
	return 0;
}		
