/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//�����ַ������ȣ���'\0'������
int my_strlen(char* arr)
{
	assert(arr != NULL);
	int count = 0;
	char* pos = arr;
	while (*pos != '\0')
	{
		count++;
		pos++;
	}
	return count;
}


int main()
{
	char arr[10] = "abcdefg";
	int ret = my_strlen(arr);
	printf("�ַ�������Ϊ%d\n", ret);
	system("pause");
	return 0;
}
*/