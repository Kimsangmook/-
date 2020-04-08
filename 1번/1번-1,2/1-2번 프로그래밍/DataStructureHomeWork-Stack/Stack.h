#pragma once
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100
#define MAX_ARRAY_SIZE 100
typedef int element;
typedef struct {
	element *data;		// data�� �����ͷ� ���ǵȴ�. 
	int capacity;		// ���� ũ��
	int top;
} StackType;

class Stack
{
public:
	Stack();
	~Stack();
	void init_stack(StackType *s);
	void s_delete(StackType *s);
	int is_empty(StackType *s);
	int is_full(StackType *s);
	void push(StackType *s, element item);
	element pop(StackType *s);
	element peek(StackType *s);
private:

};


