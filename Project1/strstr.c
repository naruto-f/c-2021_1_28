/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//���ַ���str1�����Ƿ�������ַ���str2
//����1�������ȶԷ�
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	if (*str2 == '\0')
	{
		return str1;
	}
	char* p1 = NULL;
	char* p2 = NULL;
	char* cur = str1;
	while (*cur)
	{
		p1 = cur;
		p2 = str2;
		while (*p1 && *p2 && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (!*p2)
		{
			return cur;
		}
		if (!*p1)
		{
			return NULL;
		}
		cur++;
	}
	return NULL;
}

//����2��KMP�㷨�� Ч�ʱȱ���������

int main()
{
	const char* str1 = "ab";
	const char* str2 = "cdead";
	int ret = my_strstr(str1, str2);
	if (ret != NULL)
	{
		printf("����\n");
	}
	else
	{
		printf("������\n");
	}
	return 0;
}
*/