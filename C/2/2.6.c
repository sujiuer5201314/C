#include <stdio.h>//打开一个工具库
int main()//主函数：程序的入口  有且只有一个，而且必须要有一个 (头文件)
{
    //输入数据
    printf("-------------------------\n");
    printf("请输入第一个为数字，第二三个为字母\n");
    
    //定义变量
    int f;
    char g;

    //获取输入的按键
    scanf("%d\n%c\n",&f,&g);
    printf("-------------------\n");
    //输出数据
    printf("%d\n%c\n",f,g);

    //分割
    
    //定义变量
    char h;
    //获取键盘数据
    h = getchar();

    printf("-------------------\n");

    //也是输出数据
    putchar(h);

    return 0;//代码结束
}