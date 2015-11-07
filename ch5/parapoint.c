#include <stdio.h>

void swap(int x, int y){
	int temp;

	temp = x;
	x = y;
	y = temp;
}

void swap2(int *px, int *py){
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}

int main(){
	int a=10, b=20;

	swap(a, b);
	printf("a=%d, b=%d\n", a, b);

	swap2(&a, &b);
	printf("a=%d, b=%d\n", a, b);
}
