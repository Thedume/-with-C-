#include <stdio.h>

// 링크드 리스트의 노드 표현
typedef int ElementType; // int 로 선언 했지만, 나중에 작성할 데이터의 자료형에 따라 변환 가능

typedef struct tagNode {
	ElementType Data;
	struct Node* NextNode;
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

int main() {



	return 0;
}