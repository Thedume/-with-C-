#include <stdio.h>

// ��ũ�� ����Ʈ�� ��� ǥ��
typedef int ElementType; // int �� ���� ������, ���߿� �ۼ��� �������� �ڷ����� ���� ��ȯ ����

typedef struct tagNode {
	ElementType Data;
	struct Node* NextNode;
} Node;

// ��� ����
Node* SLL_CreateNode(ElementType NewData) // SLL : simply linked list
{
	Node* NewNode = (Node*)malloc(sizeof(Node));

	NewNode->Data = NewData;	// �����͸� �����Ѵ�.
	NewNode->NextNode = NULL;	// ���� ��忡 ���� �����ʹ� NULL�� �ʱ�ȭ�Ѵ�.

	return NewNode;
}

// ��� �Ҹ�
void SLL_DestroyNode(Node* _Node) {
	free(_Node);
}

int main() {



	return 0;
}