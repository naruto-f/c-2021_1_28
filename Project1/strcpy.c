/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//字符串复制
char* my_strpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src);
	char* pos = dest;
	while (*pos++ = *src++)  //'\0'的asscal码值为0，即src走到'\0'时while条件为假
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
	printf("复制后的arr1：%s\n", arr1);
	return 0;
}
*/