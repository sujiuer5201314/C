#include <stdio.h>//打开一个工具库
int main()//主函数：程序的入口  有且只有一个，而且必须要有一个 (头文件)
{

    /*格式占位符：将输出的数据转换成指定的格式输出    
      printf("格式占位符",变量);
      类型             格式占位符
      int                 %d
      char                %c
      float               %f
      double              %lf
    */
    
    //输出使用

    int a = 10;
    printf("%d\n",a);

    char b = 'a';
    printf("%c\n",b);
    
    //在输出小数时默认输出后六位不够补0，且超出6位自动四舍五入
    float c = 3.141592653589793238446f;
    printf("%f\n",c);

    float d = 3.1415f;
    printf("%f\n",d);

    double e = 3.141592653589793238446;
    printf("%lf\n",e);
    //"%.7lf"意为输出小数点后七位
    printf("%.7lf\n",e);

    //需要输出多个数据一次性输出
    printf("%d\n%c\n%f\n%f\n%lf\n%.7lf\n",a,b,c,d,e,e);
    printf("-------------------------\n");

    return 0;//代码结束
}