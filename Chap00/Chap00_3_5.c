// 0.3.5 힙에서 데이터를 다루는 방법

#include <stdio.h>

typedef struct tagPoint {
	int x;
	int y;
}Point;

int main() {
	
	Point* ptr = (Point*)malloc(sizeof(Point));		// Point 크기 만큼 메모리를 힙에 할당, 스택에 위치한 ptr이 그 메모리 주소를 가리킴.

	printf("x : %d, y : %d", ptr->x, ptr->y);		// "x : 30, y : 40" 출력

	free(ptr);	// 메모리 누수 방지

	return 0;
}