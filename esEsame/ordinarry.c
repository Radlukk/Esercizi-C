#include <stdio.h>
#define DIM 10

int main(int argc, char * argv[]){

	int i, num, ar[DIM];

	for(i = 0; i < DIM; i++){
		printf("Insert num: ");
		scanf("%d", &ar[i]);
		while(ar[i] < 0){
			printf("Insert num: ");
			scanf("%d", &ar[i]);
		}
	}

	for(i = 0; i< DIM; i++)
		printf("%d ", ar[i]);
  printf("\n");

	for(i = 0; i < DIM; i++){
		if(ar[i] > ar[i+1]){
			num = ar[i];
			ar[i] = ar[i+1];
			ar[i+1] = num;
			if(i == 1)
				i = -1;
      if(i == 2)
        i = 0;
		}
	}

	for(i = 0; i< DIM; i++)
		printf("%d ", ar[i]);

	printf("\n");
	return 0;
}
