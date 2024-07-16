#ifndef DOUBLY_LINKEDLIST_H
#define DOUBLY_LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode {
	ElementType Data;
	struct tagNode* PrevNode;
	struct tagNode* NextNode;
} Node;

// 함수 원형 선언
Node*	DLL_CreateNode(ElementType NewData);			// 노드 생성
void	DLL_DestroyNode(Node* _Node);					// 노드 소멸
void	DLL_AppendNode(Node** Head, Node* NewNode);		// 노드 (끝에)추가
void	DLL_InsertAfter(Node* Current, Node* NewNode);	// 노드 (중간에)추가
void	DLL_RemoveNode(Node** Head, Node* Remove);		// 노드 제거
Node*	DLL_GetNodeAt(Node* Head, int Location);		// 노드 탐색
int		DLL_GetNodeCount(Node* Head);					// 노드 개수 세기

#endif