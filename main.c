#include <stdio.h>
#include <stdlib.h>
#define MAX_STRING 250
//������ʦ���õ���ҵ����KMP�㷨
typedef struct
{
    char str[MAX_STRING];
    int length;
}StringType;

int CreadString(StringType *T)
{
    gets(T->str);
    for (T->length = 0; T->str[T->length] != NULL; T->length++);//�о���
    printf("�ַ�������Ϊ:%d,�ַ���Ϊ��", T->length);
    puts(T->str);
    return T->length;
}

int main()
{
    int t;
    StringType T, S;
    while(1)
    {
        printf("������һ������(�䳤��С��%d): ", MAX_STRING);
        t = CreadString(&T);
        T->length;//Ϊʲô�ò���
        printf("������һ���Ӵ�(�䳤��С��%d): ", T->length);
        CreadString(&S);

    }



    return 0;
}
