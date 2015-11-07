#include <stdio.h>

#define max(A,B) ((A) > (B) ? (A) : (B))
#define square(x) x*x
#define dprint(expr) printf(#expr " = %d\n", expr)
#define paste(front, back) front ## back

main(){
	int i, j ,k;
	int ia=5, ib=10, iaib=0;

	i = 3;
	j = 7;
	k = max(i++, j++);
	printf("i=%d, j=%d, k=%d\n", i, j ,k);

	printf("square=%d, %d, %d\n", square(ia), square(ib), square(ia+2));

	dprint(max(ia, ib));

	printf("%d\n", paste(ia, ib));
}
