#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode {
	ElementType Data;
	struct tagNode* NextNode;
} Node;

// 함수 원형 선언
Node*	SLL_CreateNode(ElementType NewData);			// 노드 생성
void	SLL_DestroyNode(Node* _Node);					// 노드 소멸
void	SLL_AppendNode(Node** Head, Node* NewNode);		// 노드 (끝에)추가
void	SLL_InsertAfter(Node* Current, Node* NewNode);	// 노드 (중간에)추가
void	SLL_InsertNewHead(Node** Head, Node* NewHead);	// 노드 (앞에)추가
Node*	SLL_GetNodeAt(Node* Head, int Location);		// 노드 탐색
void	SLL_RemoveNode(Node** Head, Node* Remove);		// 노드 제거
int		SLL_GetNodeCount(Node* Head);					// 노드 개수 세기

#endif