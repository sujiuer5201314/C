/*
常量：不可被改变的量
如：
1 2 3 4 5 6 7 8 9 0
0.0 0.1 0.2
a b c d
'1' '2' '3' 'a' 'b' 'c'
"abcd" "bilbil"
\n \t
*/

//符号常量：用一个符号代表一个常量，可以让使用常量时更加清楚，做到一改全改
//#define Π 3.1415926

//地址常量：如HP(血量)的地址

/*
变量：可以改变的量
要存什么类型的数据，就要用什么类型的定义一个变量来存
定义变量格式：类型  变量名(标识符)
变量名字可以包含字母 数字 英文下划线，且不可以数字开头
*/

/*
基本数据类型：
int （整型）
    整形变量：存整数
    这一步叫初始化
    int HP = 100;
    int Age = 26;
    int Class_Age;
    Class_Age = 5;赋值操作

char （字符型）
    单个字符'a'
    多个字符"abcd"
    字符可以和数字相互转换 ASCII表
    char ch ='a'
    转换整型 ch = 65；也就是字符a
    
    转换字符型
    int b;
    b = ch;//隐示转换
    ch =(int)ch;//强制转换

浮点型分两种
    float （单精度浮点型） 
    精确到小数点6-7位
    float x = 1.23456f;//f不影响值表示x是float类型，编译器默认x是double类型

    double(双精度浮点型)
    精确到小数点16-17位

long (长整型)


short (短整型)


*/

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
    printf("%d\n%c\n%f\n%f\n%lf\n%.7lf\n",a,b,c,d,e);
    printf("-------------------------\n");

    //强制转换
    int j = 'a';
    printf("%d\n",j);

    double k = (int) 'a';
    printf("%lf\n",k);
    
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
