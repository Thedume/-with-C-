#ifndef ARRAYSTACK.H
#define ARRAYSTACK.H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode {
	ElementType Data;
} Node;

typedef struct tagArrayStack
{
	int Capacity;
	int Top;
	Node* Nodes;
} ArrayStack;

void AS_CreateStack(ArrayStack** Stack, int Capacity);
void AS_DestroyStack(ArrayStack* Stack);

#endif