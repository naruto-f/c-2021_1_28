/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//�ַ���׷�ӣ��������ַ�����ȱ���ǲ���ʵ���ַ����Լ�׷���Լ�
char* my_strcat(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* pos = dest;
	while (*pos != '\0')
	{
		pos++;
	}
	while (*pos++ = *src++)
	{
		;
	}
	return dest;
}

int main()
{
	char arr1[10] = "abcde";
	char arr2[] = "fg";
	my_strcat(arr1, arr2);
	printf("׷�Ӻ��arr1Ϊ��%s\n", arr1);
	return 0;
}
*/