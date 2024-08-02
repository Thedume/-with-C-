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

// �Լ� ���� ����
Node* CDLL_CreateNode(ElementType NewData);			// ��� ����
void	CDLL_DestroyNode(Node* _Node);					// ��� �Ҹ�
void	CDLL_AppendNode(Node** Head, Node* NewNode);		// ��� (����)�߰�
void	CDLL_InsertAfter(Node* Current, Node* NewNode);	// ��� (�߰���)�߰�
void	CDLL_RemoveNode(Node** Head, Node* Remove);		// ��� ����
Node* CDLL_GetNodeAt(Node* Head, int Location);		// ��� Ž��
int		CDLL_GetNodeCount(Node* Head);					// ��� ���� ����

#endif