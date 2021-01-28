/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//有数字限制的字符串比较大小
int my_strncmp(const char* str1, const char* str2, int size)
{
	assert(str1 && str2);
	char* pos1 = (char*)str1;
	char* pos2 = (char*)str2;
	while (size && (*pos1 == *pos2))
	{
		if (*pos1 == '\0')
		{
			return 0;
		}
		pos1++;
		pos2++;
		size--;
	}
	if (size == 0)
	{
		return 0;
	}
	return (*pos1 - *pos2);
}


int main()
{
	char arr1[] = "abcde";
	char arr2[] = "abcde";
	printf("请输入要比较的位数：>\n");
	int k = 0;
	scanf("%d", &k);
	int ret = my_strncmp(arr1, arr2, k);
	if (ret == 0)
	{
		printf("相等\n");
	}
	else if(ret > 0)
	{
		printf("arr1大于arr2\n");
	}
	else
	{
		printf("arr1小于arr2\n");
	}
	return 0;
}
*/