#include <stdio.h>

int main(){
	struct point {
		int x;
		int y;
	};

	struct rect{
		struct point pt1;
		struct point pt2;
	};

	struct rect screen;

	screen.pt1.x = 10;
	screen.pt1.y = 20;
	screen.pt2.x = 300;
	screen.pt2.y = 180;

	printf("screen : %d %d %d %d\n", screen.pt1.x, screen.pt1.y, screen.pt2.x, screen.pt2.y);


}
