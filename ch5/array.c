#include <stdio.h>

int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int *pa;
	int x, i;

	pa = &a[0];
	x = *pa;
	printf("pa=%X, *pa=%d, x=%d\n", pa, *pa, x);

	pa = a;
	x = *pa;
	printf("pa=%X, *pa=%d, x=%d\n", pa, *pa, x);

	for(i=0; i< sizeof(a)/sizeof(a[0]); i++){
		printf("%d ", a[i]);
	}
	printf("\n");

	for(i=0; i< sizeof(a)/sizeof(a[0]); i++){
		printf("%d ", *(a+i));
	}
	printf("\n");
}
