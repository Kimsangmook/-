#include "Deque.h"
#include <string.h>
#include <iostream>
#include <windows.h>

#define TRUE 1
#define FALSE 0

bool Function_Check_palindrome(char *c, DequeType q1);

int main(void)
{
	Deque dq;
	DequeType queue;
	dq.init_deque(&queue);

	char k[MAX_ARRAY_SIZE] = {};
	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", k);
	if (Function_Check_palindrome(k, queue))
	{
		printf("ȸ���Դϴ�.");
	}
	else
		printf("ȸ���� �ƴմϴ�.");
	system("pause");
	return 0;
}
bool Function_Check_palindrome(char * c, DequeType q1)
{
	Deque dq;									//ť����
	int plen = strlen(c);						//�Է� ���� ����
	char a[MAX_ARRAY_SIZE] = {};				//���ȣ�� ��ȯ�� string

	//ť�� ������ �ֱ�
	for (int i = 0; i < plen; i++) {			
		dq.add_rear(&q1, c[i]);
	}
	//ȸ�� �˻�
	if (plen == 0 || plen == 1) {
		return TRUE;
	}
	else if (dq.delete_front(&q1) == dq.delete_rear(&q1))
	{
		for (int i = 0; i < q1.rear-q1.front; i++)
		{
			a[i] = dq.delete_front(&q1);
		}
		Function_Check_palindrome(a, q1);
	}
	else
		return FALSE;
}
