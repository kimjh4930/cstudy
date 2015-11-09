#include <stdio.h>

#define XMAX 320
#define YMAX 200

struct point{
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};

struct point makepoint(int x, int y){
	struct point temp;
	temp.x = x;
	temp.y = y;
	return temp;
}

struct point addpoint (struct point p1, struct point p2){
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}

int main(){
	struct rect screen;
	struct point middle;

	screen.p1 = makepoint(0,0);
	screen.p2 = makepoint(XMAX, YMAX);

	middle = makepoint((screen.p1.x+screen.p2.x)/2, (screen.p1.y+screen.p2.y)/2);

	printf("middle : %d, %d\n ", middle.x, middle.y);

	screen.p1 = addpoint(screen.p1, middle);
	printf("screen.p1 : %d, %d\n", screen.p1.x, screen.p1.y);
}
