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

// ��� �߰� ����
void SLL_AppendNode(Node** Head, Node* NewNode)
{
	// ��� ��尡 NULL�̶�� ���ο� ��尡 Head�� �ȴ�.
	if ((*Head) == NULL)
		*Head = NewNode;
	else {
		// ������ ã�� NewNode�� �����Ѵ�.
		Node* Tail = (*Head);
		while (Tail->NextNode != NULL)
			Tail = Tail->NextNode;

		Tail->NextNode = NewNode;
	}
}

int main() {
	// Vitamin QUIZ 1-1
	// printf("sizeof(Node): %d, sizeof(Node*): %d.\n", sizeof(Node), sizeof(Node*));

	Node* List = NULL;
	Node* NewNode = NULL;
	NewNode = SLL_CreateNode(117);	// ���� ����ҿ� ��� ����
	SLL_AppendNode(&List, NewNode); // ������ ��带 List�� �߰�
	NewNode = SLL_CreateNode(119);	// ���� ����ҿ� �� �ٸ� ��� ����
	SLL_AppendNode(&List, NewNode);	// ������ ��带 List�� �߰�

	return 0;
}