// 0.3.5 ������ �����͸� �ٷ�� ���

#include <stdio.h>

typedef struct tagPoint {
	int x;
	int y;
}Point;

int main() {
	
	Point* ptr = (Point*)malloc(sizeof(Point));		// Point ũ�� ��ŭ �޸𸮸� ���� �Ҵ�, ���ÿ� ��ġ�� ptr�� �� �޸� �ּҸ� ����Ŵ.

	printf("x : %d, y : %d", ptr->x, ptr->y);		// "x : 30, y : 40" ���

	free(ptr);	// �޸� ���� ����

	return 0;
}