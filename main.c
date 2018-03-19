#include <stdio.h>
#include <stdlib.h>
#define MAX_STRING 250
//这是老师布置的作业，用KMP算法
typedef struct
{
    char str[MAX_STRING];
    int length;
}StringType;

int CreadString(StringType *T)
{
    gets(T->str);
    for (T->length = 0; T->str[T->length] != '\0'; T->length++);//比较的时候，原来等式左边是个char类型的，怎么能跟NULL比较
    printf("字符串长度为:%d,字符串为：", T->length);
    puts(T->str);
    return T->length;
}

int main()
{
    int t;
    StringType T, S;
    while(1)
    {
        printf("请输入一个主串(其长度小于%d): ", MAX_STRING);
        t = CreadString(&T);
        if(T.length <= 0)//也可以写成 if( t <= 0 )
            break;
        printf("请输入一个子串(其长度小于%d): ", T.length);
        CreadString(&S);
    }
    return 0;
}
