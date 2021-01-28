/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//字符串追加，但是这种方法的缺点是不能实现字符串自己追加自己
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
	printf("追加后的arr1为：%s\n", arr1);
	return 0;
}
*/