/*
关系运算符：
>(大于) >=(大于等于) <(小于) <=(小于等于) ==(等于) !=(不等于)
判断表达结果只有2种 真(1) 假(2)
*/

#include <stdio.h>//引入库

int main()//主函数
{
    //关系运算符
    int e = 10 > 10;
    int f = 10 > 9;
    printf("%d %d",e,f);

    return 0;//结束
}