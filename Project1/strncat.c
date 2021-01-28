/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//有数字限制的字符串追加，这种方法可以实现字符串自己追加自己
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
	printf("追加后的arr1为：%s\n", arr1);
	return 0;
}
*/