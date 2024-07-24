/*
赋值运算符
= += -+ *= /= %=
*/

#include <stdio.h>//打开一个工具库 stdio.h为库名
int main()//主函数：程序的入口  有且只有一个，而且必须要有一个 (头文件)
{
    // =
    int a = 10,b = 1,c = 1,d = 1,e = 1,f = 12;
    // +=
    int g = b+=a;//b=b+a
    // -=
    int h = c-=a;//b=b-a
    // *=
    int i = d*=a;//b=b*a
    // /=
    int j = e/=a;//b=b/a
    // %=
    int k = f%=a;//b=b%a
    printf("%d\n%d\n%d\n%d\n%d",g,h,i,j,k);
    return 0;//代码结束
}