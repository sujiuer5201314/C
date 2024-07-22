#include <stdio.h>//打开一个工具库
int main()//主函数：程序的入口  有且只有一个，而且必须要有一个 (头文件)
{
    //强制转换
    int a = 'a';
    printf("%d\n",a);

    double b = (int) 'a';
    printf("%lf\n",b);

    return 0;//代码结束
}