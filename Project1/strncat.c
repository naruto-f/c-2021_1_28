/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//���������Ƶ��ַ���׷�ӣ����ַ�������ʵ���ַ����Լ�׷���Լ�
char* my_strncat(char* dest, const char* src, int size)
{
	assert(dest);
	assert(src);
	char* pos = dest;
	while (*pos != '\0')
	{
		pos++;
	}
	while (size && (*pos++ = *src++))
	{
		size--;
	}
	*pos = '\0';
	return dest;
}

int main()
{
	char arr1[30] = "abcde";
	char arr2[] = "abcde";
	my_strncat(arr1, arr2, 5);
	printf("׷�Ӻ��arr1Ϊ��%s\n", arr1);
	return 0;
}
*/