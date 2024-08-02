#include "Chap02_ArrayStack.h"

void AS_CreateStack(ArrayStack** Stack, int Capacity)
{
	// ������ ���� ����ҿ� ����
	(*Stack) = (ArrayStack*)malloc(sizeof(ArrayStack));

	// �Էµ� Capacity ��ŭ�� ���� ����ҿ� ����
	(*Stack)->Nodes = (Node*)malloc(sizeof(Node) * Capacity);

	// Capacity �� Top �ʱ�ȭ
	(*Stack)->Capacity = Capacity;
	(*Stack)->Top = -1;
}

void AS_DestroyStack(ArrayStack* Stack)
{
	// ��带 ���� ����ҿ��� ����
	free(Stack->Nodes);

	// ������ ���� ����ҿ��� ����
	free(Stack);
}

void AS_Push(ArrayStack* Stack, ElementType Data)
{
	Stack->Top++;
	Stack->Nodes[Stack->Top].Data = Data;
}

ElementType AS_Pop(ArrayStack* Stack)
{
	int Position = Stack->Top--;
	return Stack->Nodes[Position].Data;
}

ElementType As_Top(ArrayStack* Stack)
{
	return ElementType();
}

int AS_GetSize(ArrayStack* Stack)
{
	return 0;
}

int AS_IsEmpty(ArrayStack* Stack)
{
	return 0;
}
