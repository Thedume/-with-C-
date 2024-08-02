#ifndef CIRCULAR_DOUBLE_LINKEDIST_H
#define CIRCULAR_DOUBLE_LINKEDIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode {
	ElementType Data;
	struct tagNode* PrevNode;
	struct tagNode* NextNode;
} Node;

// 함수 원형 선언
Node* CDLL_CreateNode(ElementType NewData);			// 노드 생성
void	CDLL_DestroyNode(Node* _Node);					// 노드 소멸
void	CDLL_AppendNode(Node** Head, Node* NewNode);		// 노드 (끝에)추가
void	CDLL_InsertAfter(Node* Current, Node* NewNode);	// 노드 (중간에)추가
void	CDLL_RemoveNode(Node** Head, Node* Remove);		// 노드 제거
Node* CDLL_GetNodeAt(Node* Head, int Location);		// 노드 탐색
int		CDLL_GetNodeCount(Node* Head);					// 노드 개수 세기

#endif