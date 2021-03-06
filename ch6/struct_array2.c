#include <stdio.h>

struct key{
	char* word;
	int count;
}keytab[] ={
	"auto", 0,
	"break", 0,
	"case", 0,
	"char", 0,
	"const", 0,
	"continue", 0,
	"default", 0,
	"do", 0,
	"double", 0,
	"else", 0,
	"enum", 0,
	"extern", 0,
	"float", 0,
	"for", 0,
	"goto", 0,
	"if", 0,
	"int", 0,
	"long", 0,
	"register", 0,
	"return", 0,
	"short", 0,
	"signed", 0,
	"sizeof", 0,
	"static", 0,
	"struct", 0,
	"switch", 0,
	"typedef", 0,
	"union", 0,
	"unsigned", 0,
	"void", 0,
	"volatile", 0,
	"while", 0
};

#define NKEY sizeof(keytab)/sizeof(struct key)
#define MAXWORD 100

int getword(char*, int);
struct key* binsearch(char *, struct key *, int);

main(){
	char word[MAXWORD];
	struct key *p;

	while(getword(word, MAXWORD) != '~'){
		printf("init word : ");
		if(isalpha(word[0])){
			if((p = binsearch(word, keytab, NKEY)) != NULL){
				p->count++;
			}
		}
	}

	printf("out of while\n");

	for(p=keytab; p<keytab+NKEY; p++){
		if(p->count > 0){
			printf("%s:%d\n", p->count, p->word);
		}
	}

	return 0;

}

struct key* binsearch(char *word, struct key tab[], int n){
	int cond;
	struct key *low = &tab[0];
	struct key *high = &tab[n];
	struct key *mid;

	while(low <= high){
		mid = low + (high-low)/2;

		if((cond = strcmp(word, mid->word)) < 0){
			high = mid;
		}else if (cond > 0){
			low = mid+1;
		}else{
			return mid;
		}
	}

	return NULL;

}

int getword(char *word, int lim){
	int c;
	char *w = word;

	printf("init getword\n");
	
	while(isspace(c=getchar()));

	if(c!='~')
		*w++ = c;
	if(!isalpha(c)){
		*w = '\0';
		return c;
	}

	for(;--lim > 0; w++){
		if(!isalnum(*w = getchar())){
			break;
		}
	}

	*w = '\0';

	//printf("%c\n", word[0]);

	return word[0];
}
