// 0.3.2 ����ü ����

#include <stdio.h>

//struct Point {
//	int x;
//	int y;
//};

// struct Point �� �����ϴ°� �����ؼ� ����
typedef struct tagPoint {
	int x;
	int y;
}Point;

int main() {
	//struct Point MyPoint = { 30, 40 };
	Point MyPoint = { 30, 40 };

	printf("x : %d, y : %d", MyPoint.x, MyPoint.y);	// "x : 30, y : 40" ���

	//struct Point* ptr = &MyPoint;
	Point* ptr = &MyPoint;

	printf("x : %d, y : %d", ptr->x, ptr->y);		// "x : 30, y : 40" ���

	return 0;
}