#include "Stack.h"
#include <string.h>
#include <iostream>
#include <windows.h>

#define TRUE 1
#define FALSE 0

bool Function_Check_palindrome(char *c, StackType s1);

int main(void)
{
	Stack st1;
	StackType s1;
	st1.init_stack(&s1);

	char k[MAX_ARRAY_SIZE] = {};
	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", k);
	if (Function_Check_palindrome(k,s1))
	{
		printf("ȸ���Դϴ�.");
	}
	else
		printf("ȸ���� �ƴմϴ�.");

	system("pause");
	return 0;
}

bool Function_Check_palindrome(char * c, StackType s1)
{
	Stack st1;										//������
	int plen = strlen(c);							//�Է� ���� ����
	int i = 0;
	char a[MAX_ARRAY_SIZE] = {};					//�����1
	char b[MAX_ARRAY_SIZE] = {};					//���ȣ���
	strcpy(a, c);									//����
	//���ؿ� ������ �ֱ�
	for (int i = 0; i < plen; i++) {
		st1.push(&s1, c[i]);
	}
	//ȸ���˻�
	if (plen == 0 || plen == 1) {
		return TRUE;
	}
	else if (a[i] == st1.pop(&s1))
	{
		for (int i = 0; i < plen - 2; i++) {
			b[i] = a[i + 1];
		}
		Function_Check_palindrome(b, s1);
	}
	else
	return FALSE;
}
