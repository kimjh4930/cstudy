#include <stdio.h>

int str_len(char *s){
	int n;

	for(n=0; *s != NULL; s++){
		n++;
	}

	return n;
}

int main(){
	char arr[] = "hello world!";
	int length;
	char *ptr;

	length = str_len("hello world!");
	printf("length : %d\n", length);

	length = str_len(arr);
	printf("length : %d\n", length);

	ptr = arr;
	length = str_len(ptr);
	printf("length : %d\n", length);

	ptr = arr+7;
	length = str_len(ptr);
	printf("length : %d\n", length);

}
