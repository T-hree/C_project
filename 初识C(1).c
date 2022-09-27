#define _CRT_SECURE_NO_WARNINGS 1 // 关闭代码编译时的警告warning
#include <stdio.h>
//
//int main(){
//    printf("hello world \n");
//    return 0;
//}
//
//char 字符类型
//short 短整形
//int 整形
//long 长整形
//long long 更长的长整形 c99 的标准
//float 单精度浮点型
//double 双精度浮点型
//%d 打印整形
//%c 打印字符
//%f 打印浮点型数字  小数
//%p 以地址的形式打印
//%x 打印十六进制数字
//%o 。。。。

//
//#include <stdio.h>
//
//int main() {
//    char ch = 'A';
//    printf("%c\n", ch);  // %c 打印字符格式的数据
//
//    int age = 23;
//    printf("%d\n", age); // %d 打印整形十进制数据
//
////    short int // 短整形
////    int 整形
////    long 长整形
////    long num = 100;
////    printf("%d\n", num);
//
//    float f = 1.1;
//    printf("%f\n", f);
//
//
//    double  d = 3.14;
//    printf("%lf\n", d);
//
//    return 0;
//}


//字节
//计算机中的单位
//bit     比特位
//byte = 8 bit    字节
//kb = 1024 byte
//mb = ...
//....


# include <stdio.h>

//int main() {
//    printf("%d\n", sizeof(char));  // 1
//    printf("%d\n", sizeof(short)); // 2
//    printf("%d\n", sizeof(int));  // 4
//    printf("%d\n", sizeof(long)); // 4  可以是4 也可以是8
//    printf("%d\n", sizeof(long long));  // 8
//    printf("%d\n", sizeof(float));  // 4
//    printf("%d\n", sizeof(double)); //8
//}


//int num2 = 20;  // 全局变量  定义在代码块{} 之外的变量
//
//int main() {
////    int num1 = 11;  // 局部变量  定义在代码块{} 内部的变量
////    int num2 = 22;
////    // 局部变量和全局变量的名字 建议不要相同
////    // 当局部变量和全局变量的名字 相同时， 局部变量优先
////    printf("%d\n", num2);
//
//    {
//        int num2 = 10;
//    }
//    printf("%d\n", num2);
//    return 0;
//}



//int main() {
//    // 计算两个数的和
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    // 输入数据 - 使用输入函数
//    scanf("%d%d", &num1, &num2);
//    // & 取地址符号
//    sum = num1 + num2;
//    printf("sum = %d\n", sum);
//    return 0;
//}

//
//int main() {
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    scanf("%d%d", &num1, &num2);
//    // scanf 是C语言提供的， scanf_s 不是标准C语言提供的，VS编译器提供的
//    // strcpy strlen strcat 都是不安全的
//    sum = num1 + num2;
//
//    printf("%d\n", sum);
//
//    return 0;
//}






