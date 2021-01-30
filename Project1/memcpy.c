/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//内存拷贝，用于没有内存重叠的拷贝
void* my_memcpy(void* arr1, const void* arr2, size_t count)
{
	assert(arr1);
	assert(arr2);
	void* ret = arr1;
	while (count--)
	{
		*(char*)arr1 = *(char*)arr2;
		((char*)arr1)++;
		((char*)arr2)++;
	}
	return ret;
}




int main()
{
	int arr1[] = { 1, 2, 3, 4 };
	int arr2[] = { 5, 6, 7, 8 };
	my_memcpy(arr1, arr2, 12);
	return 0;
}
*/