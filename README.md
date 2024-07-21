# 关于C语言的小案例

<img src="https://github.com/sujiuer5201314/C/blob/main/%E5%94%AF%E4%BD%A0%E6%9C%80%E4%BA%89%E6%B0%94.jpg" style="pointer-events: none;">

## 这是C基础存放文件的地方！！

### 1.[入门告诉你C的注意事项](https://github.com/sujiuer5201314/C/tree/main/C/1)

<details>
<summary>注释的方法</summary>

- //单行注释
- 
- /*
-   多行注释
- */
</details>

<details>
<summary>引入库的方法</summary>
#include <stdio.h>//打开一个工具库 stdio.h为库名
</details>

<details>
<summary>主函数</summary>
int main()//主函数：程序的入口  有且只有一个，而且必须要有一个 (头文件)
{
    
    return 0;//代码结束
}
</details>

<details>
<summary>转义字符</summary>
例：\n  转义字符 意为跨行
</details>

### 2.[常量变量](https://github.com/sujiuer5201314/C/tree/main/C/2)

<details>
<summary>常量</summary>
常量：不可被改变的量
如：
1 2 3 4 5 6 7 8 9 0
0.0 0.1 0.2
a b c d
'1' '2' '3' 'a' 'b' 'c'
"abcd" "bilbil"
\n \t

符号常量：用一个符号代表一个常量，可以让使用常量时更加清楚，做到一改全改
例：
#define Π 3.1415926

地址常量：如HP(血量)的地址
</details>

<details>
<summary>变量</summary>
变量：可以改变的量
要存什么类型的数据，就要用什么类型的定义一个变量来存
定义变量格式：类型  变量名(标识符)
变量名字可以包含字母 数字 英文下划线，且不可以数字开头
</details>

<details>
<summary>基本数据类型</summary>

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


</details>

<details>
<summary>占位符</summary>
格式占位符：将输出的数据转换成指定的格式输出    
      printf("格式占位符",变量);
      类型             格式占位符
      int                 %d
      char                %c
      float               %f
      double              %lf
</details>

<details>
<summary>输出数据</summary>
输出使用

    int a = 10;
    printf("%d\n",a);

    char b = 'a';
    printf("%c\n",b);
</details>

<details>
<summary>强制转换</summary>
强制转换
    int j = 'a';
    printf("%d\n",j);

    double k = (int) 'a';
    printf("%lf\n",k);
</details>

<details>
<summary>输入数据</summary>
- 1
定义变量
    int f;
    char g;

获取输入的按键
    scanf("%d\n%c\n",&f,&g);

输出数据
    printf("%d\n%c\n",f,g);

- 2
定义变量
    char h;

获取键盘数据
    h = getchar();

也是输出数据
    putchar(h);
</details>

### 3.[运算符](https://github.com/sujiuer5201314/C/tree/main/C/3)

<details>
<summary>算数运算符</summary>
+(加) —(减) *(乘) /(除) %(余)
%(余)：
5/3=1剩余2
%=2
</details>

<details>
<summary>自增自减运算符</summary>
++i：先加了1在使用i的值
--i：先减了1在使用i的值
i++：先使用了i的值后加1
i--：先使用了i的值后减1
</details>

<details>
<summary>运算优先级</summary>
例子：
a = a++ +1
a++ 在第二级
+1 在第三级
所以优先算a++后算+1

注：其余运算可在网上找到
</details>

<details>
<summary>关系运算</summary>
关系运算符：
>(大于) >=(大于等于) <(小于) <=(小于等于) ==(等于) !=(不等于)
判断表达结果只有2种 真(1) 假(2)
</details>

<details>
<summary>逻辑运算</summary>
逻辑运算符：
逻辑与：&& (结果都为真输出才为真)
逻辑或：|| (随意一个结果为真那输出也是真)
逻辑非：! (如果结果为真，输出反之为假)
</details>

## 许可证
- [请遵守该证书，谢谢](https://github.com/sujiuer5201314/C/blob/main/README.md)