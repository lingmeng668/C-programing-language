#include <stdio.h>

enum color 
{
    red = 1,
    blue
};

int main()
{
    // char -字符类型
    char zimu = 'a';
    printf("11\n");
    printf("%d", 100);    //%d 十进制数字
    printf("%c\n", zimu); //%d 打印字符串类型数据
    //%f  浮点数类型
    //%p  地址形式打印
    //%x  十六进制
    //%o  八进制
    //%lf  双精度浮点数打印
    //%s  字符串打印

    // short int  短整型
    // long  长整型
    // float  浮点数
    // double   双精度浮点数
    // 小数点默认double 如果单精度那么在小数点后加f eg：95.6f float high = 182.4f
    printf("%d",red);
    return 0;
}




//自我练习
//程序功能：计算整数和 乘积 商

#include<stdio.h>

int main()
{
    int a,b,c,num1,num2;
    printf("请输入两个数字使用空格隔离开来");
    scanf("%d%d",&num1,&num2);
    a = num1 + num2;
    b = num1 * num2;
    c = num1 / num2;
    printf("和%d乘%d商%d",a,b,c);
}
