
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//���������Ƶ��ַ�������
char* my_strnpy(char* dest, const char* src, size_t size)
{
	assert(dest != NULL);
	assert(src);
	char* pos = dest;
	while (size && (*pos++ = *src++))  //'\0'��asscal��ֵΪ0����src�ߵ�'\0'ʱwhile����Ϊ��
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
	}                         //strncpy�����Զ����ս��'\0',ʹ��ʱ�б�ҪʱҪ�Լ��ӡ�\0��;
	return dest;
}


int main()
{
	char arr1[10] = "abcdef";
	char arr2[] = "bit";
	my_strnpy(arr1, arr2, 4);
	printf("���ƺ��arr1��%s\n", arr1);
	return 0;
	system("pause");
}

