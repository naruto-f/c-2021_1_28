/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//用于可能有内存重叠的拷贝
void* my_memmove(void* dest, const void* src, size_t count)   //注意，这里count是字节数，不是元素个数
{
	assert(dest);
	assert(src);
	void* ret = dest;
	if (dest > src)
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	else
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
	}
	return ret;
}



int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	my_memmove(arr, arr+3, 5 * sizeof(arr[0]));
	return 0;
}
*/