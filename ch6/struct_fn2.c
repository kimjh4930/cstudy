#include <stdio.h>

#define XMAX 320
#define YMAX 200

struct point {
	int x;
	int y;
};

struct rect{
	struct point p1;
	struct point p2;
};

void makepoint(struct point *pp, int x, int y){
	pp->x = x;
	pp->y = y;
}

void addpoint(struct point *pp1, struct point *pp2){
	pp1->x += pp2->x;
	pp1->y += pp2->y;
}

int main(){
	struct rect screen;
	struct point middle;

	makepoint(&screen.p1, 0, 0);
	makepoint(&screen.p2, XMAX, YMAX);
	makepoint(&middle, (screen.p1.x + screen.p2.x)/2, (screen.p1.y + screen.p2.y)/2);

	printf("middle : %d, %d\n", middle.x, middle.y);

	addpoint(&screen.p1, &middle);

	printf("screen.py : %d, %d\n", screen.p1.x, screen.p1.y);
}
