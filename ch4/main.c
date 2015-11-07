#include <stdio.h>
#include "ch0405.h"

int main(){
	printf("fn_a() : %d\n", fn_a());
	printf("fn_b() : %d\n", fn_b(30,40));
	printf("fn_c() : %d\n", fn_c());

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
