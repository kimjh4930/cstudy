#include <stdio.h>

void strcpy1(char *s, char *t){
	int i;
	i=0;
	while((s[i] = t[i]) != '\0'){
		i++;
	}
}

void strcpy2(char *s, char *t){
	int i;
	i=0;
	while((*s = *t) != '\0'){
		s++;
		t++;
	}
}

void strcpy3(char *s, char *t){
	while((*s++ = *t++) != '\0');
}

void strcpy4(char *s, char *t){
	while(*s++ = *t++);
}

main(){
	char message1[] = "a1:Now is the time";
	char message2[] = "a2:Now is the time";
	char *pmessage = "p: Now is the time";

	message1[14] = 'T';
	message1[15] = 'I';
	message1[16] = 'M';
	message1[17] = 'E';

	printf("%s\n", message1);
	printf("%s\n", message2);

//	*(pmessage+11) = "T";
//	printf("%s\n", pmessage);

	//strcpy1(pmessage, message2);
//	pmessage = message2;
//	printf("%s\n",pmessage);

//	message2 = message1;
	strcpy1(message2, message1);
	printf("%s\n", message2);

	strcpy4(message2, pmessage);
	printf("%s\n", message2);


}
