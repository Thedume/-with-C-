#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode {
	ElementType Data;
	struct tagNode* NextNode;
} Node;

// �Լ� ���� ����
Node*	SLL_CreateNode(ElementType NewData);			// ��� ����
void	SLL_DestroyNode(Node* _Node);					// ��� �Ҹ�
void	SLL_AppendNode(Node** Head, Node* NewNode);		// ��� (����)�߰�
void	SLL_InsertAfter(Node* Current, Node* NewNode);	// ��� (�߰���)�߰�
void	SLL_InsertNewHead(Node** Head, Node* NewHead);	// ��� (�տ�)�߰�
Node*	SLL_GetNodeAt(Node* Head, int Location);		// ��� Ž��
void	SLL_RemoveNode(Node** Head, Node* Remove);		// ��� ����
int		SLL_GetNodeCount(Node* Head);					// ��� ���� ����

#endif