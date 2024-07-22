/*
自增自减运算符：
++i：先加了1在使用i的值
--i：先减了1在使用i的值
i++：先使用了i的值后加1
i--：先使用了i的值后减1
*/

#include <stdio.h>//引入库

int main()//主函数
{
    //先加(减同样)
    int a = 10;
    int b;
    b = ++a;
    printf("a=%d b=%d\n",a,b);
    
    //先使用(减同样)
    int c =10;
    int d;
    d = c++;
    printf("c=%d d=%d\n",c,d);

    return 0;//结束
}