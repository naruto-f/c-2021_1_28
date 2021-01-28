/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//在字符串str1中找是否存在子字符串str2
//方法1：暴力比对法
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

//方法2：KMP算法， 效率比暴力法更高

int main()
{
	const char* str1 = "ab";
	const char* str2 = "cdead";
	int ret = my_strstr(str1, str2);
	if (ret != NULL)
	{
		printf("存在\n");
	}
	else
	{
		printf("不存在\n");
	}
	return 0;
}
*/