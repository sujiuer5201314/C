#include <stdio.h>//打开一个工具库 stdio.h为库名
int main()//主函数：程序的入口  有且只有一个，而且必须要有一个 (头文件)
{
    //输出函数
    //\n  转义字符 意为跨行
    printf("Hellow world\n");
    

    //从键盘获取字符，以拍回车键结束
    getchar();

    return 0;//代码结束
}