extern int gA;
extern int gB;

int fn_a(){
	int a = 10;
	int b = 20;

	return a+b+gA;
}

int fn_b(int a, int b){
	return a+b+gB;
}
