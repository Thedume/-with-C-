#include <stdio.h>
#include <stdlib.h>

// 링크드 리스트의 노드 표현
typedef int ElementType; // int 로 선언 했지만, 나중에 작성할 데이터의 자료형에 따라 변환 가능

typedef struct tagNode {
	ElementType Data;
	struct tagNode* NextNode;
} Node;

// 노드 생성
Node* SLL_CreateNode(ElementType NewData) // SLL : simply linked list
{
	Node* NewNode = (Node*)malloc(sizeof(Node));

	NewNode->Data = NewData;	// 데이터를 저장한다.
	NewNode->NextNode = NULL;	// 다음 노드에 대한 포인터는 NULL로 초기화한다.

	return NewNode;
}

// 노드 소멸
void SLL_DestroyNode(Node* _Node) {
	free(_Node);
}

// 노드 추가 연산
void SLL_AppendNode(Node** Head, Node* NewNode)
{
	// 헤드 노드가 NULL이라면 새로운 노드가 Head가 된다.
	if ((*Head) == NULL)
		*Head = NewNode;
	else {
		// 테일을 찾아 NewNode를 연결한다.
		Node* Tail = (*Head);
		while (Tail->NextNode != NULL)
			Tail = Tail->NextNode;

		Tail->NextNode = NewNode;
	}
}

// 노드 탐색 연산
Node* SLL_GetNodeAt(Node* Head, int Location)
{
	Node* Current = Head;

	while (Current != NULL && (--Location) >= 0)
		Current = Current->NextNode;

	return Current;
}

// 노드 삭제 연산
void SLL_RemoveNode(Node** Head, Node* Remove)
{
	if (*Head == Remove)
		*Head = Remove->NextNode;
	else
	{
		Node* Current = *Head;
		while (Current != NULL && Current->NextNode != Remove)
			Current = Current->NextNode;

		if (Current != NULL)
			Current->NextNode = Remove->NextNode;
	}
}

// 노드 삽입 연산
void SLL_InsertAfter(Node* Current, Node* NewNode) 
{
	NewNode->NextNode = Current->NextNode;
	Current->NextNode = NewNode;
}

// 노드 개수 세기 연산
int SLL_GetNodeCount(Node* Head)
{
	int Count = 0;
	Node* Current = Head;

	while (Current != NULL)
	{
		Current = Current->NextNode;
		Count++;
	}

	return Count;
}

int main() {
	// Vitamin QUIZ 1-1
	// printf("sizeof(Node): %d, sizeof(Node*): %d.\n", sizeof(Node), sizeof(Node*));

	Node* List = NULL;

	// 노드 추가 예시
	/*
	Node* NewNode = NULL;
	NewNode = SLL_CreateNode(117);	// 자유 저장소에 노드 생성
	SLL_AppendNode(&List, NewNode); // 생성한 노드를 List에 추가
	NewNode = SLL_CreateNode(119);	// 자유 저장소에 또 다른 노드 생성
	SLL_AppendNode(&List, NewNode);	// 생성한 노드를 List에 추가
	*/

	// 노드 찾기 예시
	/*
	SLL_AppendNode(&List, SLL_CreateNode(117));
	SLL_AppendNode(&List, SLL_CreateNode(119));

	Node* myNode = SLL_GetNodeAt(List, 1);	// 두 번째 노드의 주소를 myNode에 저장
	printf("%d\n", myNode->Data);			// 119를 출력
	*/

	// 노드 삭제 예시
	/*
	Node* myNode = NULL;

	SLL_AppendNode(&List, SLL_CreateNode(117));
	SLL_AppendNode(&List, SLL_CreateNode(119));
	SLL_AppendNode(&List, SLL_CreateNode(212));

	myNode = SLL_GetNodeAt(List, 1);
	printf("%d\n", myNode->Data);	// 119 출력

	SLL_RemoveNode(&List, myNode);	// 두 번째 노드 제거

	SLL_DestroyNode(myNode);		// 링크드 리스트에서 제거한 노드를 메모리에서 완전히 소멸시킴
	*/



	return 0;
}