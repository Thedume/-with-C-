// 0.3.1 ������ ����

#include <stdio.h>

int main() {
	// ������ ����* ������;
	int* ptr = 0xFF000000;

	int a = 123;
	ptr = &a;

	ptr = 0x1004;			// �ּҰ� ���� �Ҵ�
	printf("%X\n", ptr);	// 1004 (�ʱ갪)
	printf("%X\n", --ptr);	// 1000 (4 ����)
	printf("%X\n", ++ptr);	// 1004 (4 ����)

	int arr[5] = { 0, 1, 2, 3, 4 };
	ptr = arr;

	printf("%s\n", ptr == arr ? "true" : "false");	// true ���
	printf("%d\n", *ptr);	// arr�� ù ��° ��� 0 ���

	ptr++;
	printf("%d\n", *ptr);	// arr�� �� ��° ��� 1 ���
	
	ptr--;
	printf("%d\n", *ptr);	// arr�� ù ��° ��� 0 ���


	return 0;
}