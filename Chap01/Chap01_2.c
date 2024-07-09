#include <stdio.h>
#include <stdlib.h>

// ��ũ�� ����Ʈ�� ��� ǥ��
typedef int ElementType; // int �� ���� ������, ���߿� �ۼ��� �������� �ڷ����� ���� ��ȯ ����

typedef struct tagNode {
	ElementType Data;
	struct tagNode* NextNode;
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

// ��� Ž�� ����
Node* SLL_GetNodeAt(Node* Head, int Location)
{
	Node* Current = Head;

	while (Current != NULL && (--Location) >= 0)
		Current = Current->NextNode;

	return Current;
}



int main() {
	// Vitamin QUIZ 1-1
	// printf("sizeof(Node): %d, sizeof(Node*): %d.\n", sizeof(Node), sizeof(Node*));

	Node* List = NULL;
	//Node* NewNode = NULL;
	//NewNode = SLL_CreateNode(117);	// ���� ����ҿ� ��� ����
	//SLL_AppendNode(&List, NewNode); // ������ ��带 List�� �߰�
	//NewNode = SLL_CreateNode(119);	// ���� ����ҿ� �� �ٸ� ��� ����
	//SLL_AppendNode(&List, NewNode);	// ������ ��带 List�� �߰�

	SLL_AppendNode(&List, SLL_CreateNode(117));
	SLL_AppendNode(&List, SLL_CreateNode(119));

	Node* myNode = SLL_GetNodeAt(List, 1);	// �� ��° ����� �ּҸ� myNode�� ����
	printf("%d\n", myNode->Data);			// 119�� ���

	return 0;
}