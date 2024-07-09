// 0.3.1 포인터 복습

#include <stdio.h>

int main() {
	// 데이터 형식* 포인터;
	int* ptr = 0xFF000000;

	int a = 123;
	ptr = &a;

	ptr = 0x1004;			// 주소값 직접 할당
	printf("%X\n", ptr);	// 1004 (초깃값)
	printf("%X\n", --ptr);	// 1000 (4 감소)
	printf("%X\n", ++ptr);	// 1004 (4 증가)

	int arr[5] = { 0, 1, 2, 3, 4 };
	ptr = arr;

	printf("%s\n", ptr == arr ? "true" : "false");	// true 출력
	printf("%d\n", *ptr);	// arr의 첫 번째 요소 0 출력

	ptr++;
	printf("%d\n", *ptr);	// arr의 두 번째 요소 1 출력
	
	ptr--;
	printf("%d\n", *ptr);	// arr의 첫 번째 요소 0 출력


	return 0;
}