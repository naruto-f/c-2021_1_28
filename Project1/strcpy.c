/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//�ַ�������
char* my_strpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src);
	char* pos = dest;
	while (*pos++ = *src++)  //'\0'��asscal��ֵΪ0����src�ߵ�'\0'ʱwhile����Ϊ��
	{
		;
	}
	return dest;
}


int main()
{
	char arr1[10] = "abcdef";     
	char arr2[] = "bit";
	my_strpy(arr1, arr2);
	printf("���ƺ��arr1��%s\n", arr1);
	return 0;
}
*/