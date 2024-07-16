#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode {
	ElementType Data;
	struct tagNode* PrevNode;
	struct tagNode* NextNode;
} Node;

// 노드 생성
Node* DLL_CreateNode(ElementType NewData)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));

	NewNode->Data = NewData;
	NewNode->PrevNode = NULL;
	NewNode->NextNode = NULL;

	return NewNode;
}

// 노드 소멸
void DLL_DestroyNode(Node* Node)
{
	free(Node);
}

// 노드 추가
void DLL_AppendNode(Node** Head, Node* NewNode)
{
	// 헤드 노드가 NULL이라면 새로운 노드가 Head가 된다.
	if ((*Head) == NULL)
		*Head = NewNode;
	else
	{
		// 테일을 찾아 NewNode를 연결한다.
		Node* Tail = (*Head);
		while (Tail->NextNode != NULL)
			Tail = Tail->NextNode;

		Tail->NextNode = NewNode;
		NewNode->PrevNode = Tail; // 기존의 테일을 새로운 테일의 PrevNode가 가리킴.
	}
}

// 노드 탐색
Node* DLL_GetNodeAt(Node* Head, int Location)
{
	Node* Current = Head;

	while (Current != NULL && (--Location) >= 0)
		Current = Current->NextNode;

	return Current;
}

// 노드 삭제
void DDL_RemoveNode(Node** Head, Node* Remove) 
{
	if (*Head == Remove) {
		*Head = Remove->NextNode;
		if ((*Head) != NULL)
			(*Head)->PrevNode = NULL;
	}
	else {
		Node* Temp = Remove;

		if (Remove->PrevNode != NULL)
			Remove->PrevNode->NextNode = Temp->NextNode;

		if (Remove->NextNode != NULL)
			Remove->NextNode->PrevNode = Temp->PrevNode;
	}

	Remove->PrevNode = NULL;
	Remove->NextNode = NULL;
}

int main() {
	Node* List = NULL;

	// AppendNode() 사용 예제
	/*
	DLL_AppendNode(&List, DLL_CreateNode(117));
	DLL_AppendNode(&List, DLL_CreateNode(119));
	*/


	return 0;
}