/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//�ַ����Ƚϴ�С
int my_strcmp(const char* str1, const char* str2)
{
    assert(str1 && str2);
    char* pos1 = (char*)str1;
    char* pos2 = (char*)str2;
    while (*pos1 == *pos2)
    {
        if (*pos1 == '\0')
        {
            return 0;
        }
        pos1++;
        pos2++;
    }
    return (*pos1 - *pos2);
}


int main()
{
    char arr1[] = "abcde";
    char arr2[] = "abcdef";
    int ret = my_strcmp(arr1, arr2);
    //       ret  p1��p2��
    //       0    ���
    //       >0   p1 > p2
    //       <0   p1 < p2
    printf("ret = %d\n", ret); 
    return 0;
}
*/

