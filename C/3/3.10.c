/*
sizeof()；求类型大小
*/
#include <stdio.h>//打开一个工具库 stdio.h为库名
int main()//主函数：程序的入口  有且只有一个，而且必须要有一个 (头文件)
{
    //输出4是因为10是int类型是4个字节
    printf("%d\n",sizeof(10));
    //输出4是因为float是float类型是4个字节
    printf("%d\n",sizeof(float));
    //输出是因为char是char类型是1个字节
    printf("%d",sizeof(char));

    return 0;//代码结束
}