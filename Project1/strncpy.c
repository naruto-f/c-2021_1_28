
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//带数字限制的字符串复制
char* my_strnpy(char* dest, const char* src, size_t size)
{
	assert(dest != NULL);
	assert(src);
	char* pos = dest;
	while (size && (*pos++ = *src++))  //'\0'的asscal码值为0，即src走到'\0'时while条件为假
	{
		size--;
	}
	if (size)
	{
		while (size)
		{
			*pos = '\0';
			pos++;
			size--;
		}
	}                         //strncpy不会自动加终结符'\0',使用时有必要时要自己加‘\0’;
	return dest;
}


int main()
{
	char arr1[10] = "abcdef";
	char arr2[] = "bit";
	my_strnpy(arr1, arr2, 4);
	printf("复制后的arr1：%s\n", arr1);
	return 0;
	system("pause");
}

