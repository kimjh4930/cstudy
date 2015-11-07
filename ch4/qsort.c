#include <stdio.h>

void swap(int v[], int i, int j){
	int temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;

	printf("in swap\n");
	for(i=0; i<10; i++){
		printf("%d ", v[i]);
	}
	printf("\n");
}

void qsort(int v[], int left, int right){
	int i, last;
//	void swap(int v[], int i, int j);

	if(left >= right)
		return;

	swap(v, left, (left+right)/2);

	last = left;
	for(i=left+1; i<=right; i++){
		if(v[i] < v[left]){
			swap(v, ++last, i);
		}
	}

	swap(v, ++last, i);
/*
	qsort(v, left, last-1);
	qsort(v, last+1, right);*/
}

main(){
	int i;
	int v[10] = {2,9,4,7,6,7,5,8,3,1};

	//qsort(v,0,9);

	for(i=0; i<9; i++){
		printf("%d ", v[i]);
	}

	printf("%d", v[i]);
	qsort(v,0,9);
}
