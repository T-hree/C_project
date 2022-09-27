//
// Created by 小闫 on 2022/9/27.
//

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//常量：
//C语言中的常量和变量的定义的形式有所差异
//C语言中的常量分为以下几种：
//    - 字面常量
//    - const 修饰的常变量
//    - #define 定义的标识符常量
//    - 枚举常量

//int main(){
//    3; // 字面常量
//    100;
//    3.14;
//    // const 常属性
//    // const 修饰的常变量
//    const int num = 4;
//    printf("%d\n", num);
//    num = 8;
//    printf("%d\n", num);
//    const int n = 10; // n 是变量， 但是又有常属性， 所有我们说n是常变量
//    int arr[n] = {0};
//    return 0;
//}

// #define 定义的标识符常量
//#define MAX 100
//int main(){
//    int arr[MAX] = {0};
//    printf("%d\n", MAX);
//    return 0;
//}
// 枚举常量
// 枚举 -- 一一列举
// 枚举关键字 enum
//enum Sex {
//    MALE,
//    FEMALE,
//    SECRET
//};
//// MALE, FEMALE, SECRET - 枚举常量
//
//enum Color {
//    RED,
//    YELLOW,
//    BLUE
//};
//int main() {
//    enum Sex s = MALE;
//    printf("%d\n", MALE);  // 0
//    printf("%d\n", FEMALE); // 1
//    printf("%d\n", SECRET);  // 2
//
//    enum Color color = RED;
//    color = 12312;
//    printf("%d\n", color);
//    return 0;
//}

// 字符串类型
// 由双引号引起来的一串字符成为字符串字面符（String Literal）， 简称字符串
// 字符串的结束标志是一个 \0 的转义字符。 在计算字符长度的时候 \0 是结束标识， 不算作自字符串内容
//int main() {
////    "hello";
////    "";
//    char arr[] = "abc"; //数组
//    // "abc" -- "a" "b" "c" "\0"
//    char arr1[] = {'a', 'b', 'c'};
//    // "a" "b" "c"
//    char arr2[] = {'a', 'b', 'c', 0};
//    // "a" "b" "c" "\0"
//    char arr3[] = {'a', 'b', 'c', '\0'};
//    // "a" "b" "c" "\0"
//    // "\0" 字符串的结束标志
//    // \0 - 0
//    printf("%s\n", arr);
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    printf("%s\n", arr3);
//    return 0;
//}

/*
%d 十进制有符号整数
%u 十进制无符号整数
%f 浮点数
%s 字符串
%c 单个字符
%p 指针的值
%e 指数形式的浮点数
%x, %X 无符号以十六进制表示的整数
%o 无符号以八进制表示的整数
%g 把输出的值按照 %e 或者 %f 类型中输出长度较小的方式输出
%p 输出地址符
%lu 32位无符号整数
%llu 64位无符号整数
 */
//
//#include "string.h"
//
//int main() {
//    char arr1[] = "abc";
//    char arr2[] = {'a', 'b', 'c', '\0  '};
//    printf("%d\n", strlen(arr1)); // 3
//    printf("%d\n", strlen(arr2)); // x
//    // strlen 计算字符串长度
//    return 0;
//}
/*

int main() {
//    printf("abc\n");
    printf("c:\\test\\32\\test.c");
    printf("c:\test\32\test.c");
    return 0;

}*/
/*

//?? + ) --> 三字母词
int main() {
    // 防止 三字母词
    printf("\?\?)");
    return 0;
}
*/
//# include "string.h"
//
//int main() {
////    printf("%s\n", "\"牛牛牛\"");
//
//
//    printf("%d\n", strlen("c:\\test\\32\\test.c"));
//    printf("%d\n", strlen("c:\test\32\test.c"));
//    printf("\100\n");
//    printf("\x41");
//    // \32 -- 32 是作为8进制代表的那个十进制数字，作为ASCII码值 对应的字符  8(32) ==>  26 ==>
//    return 0;
//    //  \ddd ddd表示1-3个八进制数
//    //  \xdd dd表示2个十六进制数
//
//}


//int main() {
////    printf("?(1/0)>:");
////    int select = 0;
////    scanf("%d", &select);
////    if (select == 1) {
////        printf("是");
////    } else {
////        printf("否");
////    }
//// while for do ... while
////    for (int i = 0; i < 5; i++) {
////        printf("%d\n", i);
////    };
////    printf("%d\n", i);
//    int i = 0;
//    while (i <= 10) {
//        printf("买彩票\n");
//        if (i == 5) {
//            printf("中彩票\n");
//            break;
//        } else {
//            printf("没有中\n");
//        }
//        i++;
//    }
//    return 0;
//
//}

//int Add(int num1, int num2) {
//    int sum = num1 + num2;
//    return sum;
//}
//
//int main() {
//    int sum = Add(4, 6);
//    printf("%d\n", sum);
//    return 0;
//}

//int main() {
//    int arr[10];  // 定义一个存放10个整数数字的数组
//    int arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//    char ch[20];  // 定义一个存放20个字符的数组
//    int i = 0;
//    while (i < 10) {
//        printf("%d\n", arr1[i]);
//        i++;
//    }
////    printf("%d\n", arr1[4]); // 下标访问元素
//    return 0;
//}

int main() {
    // 算术操作费 + - * / % 加减乘除摩
//    int a = 5/2; //2  除
//    int b = 5%2; //1  取余
//    printf("%d\n", a);
//    printf("%d\n", b);
    // 移位操作符 << >>  左移 右移  移二进制位
//    int a = 1;
//    // 整形1 占4个字节  - 32个比特位
//    // 00000000000000000000000000000001(1的二进制序列)
//    // 左移1位
//    // 00000000000000000000000000000010 ==>2
//    // 左移2位
//    // 00000000000000000000000000000100 ==>4
//    int b = a << 2; // a本身是不变的
//    printf("%d\n", b); // 4
    // 位（二进制位）操作
    // & 按位与
    // | 按位或
    // ^ 按位 异或： 对应的二进制位 相同则为0 ， 不同则为1
//    int a = 3;// 011
//    int b = 5;// 101
//    int c = a & b;
//    // 与 011&101 ==> 001 ==> 1  同为1（真）取真（1）  有0（假）则为0（假）
//    int d = a | b;
//    // 或 011 & 101 == > 111 ==> 7  有1（真）则为1（真）  都为0（假） 则为0（假）
//    int e = a ^ b;
//    // 异或 011 & 101 ==> 110 ==> 6   相同为0 不同为1
//    printf("%d\n", c); // 1
//    printf("%d\n", d); // 7
//    printf("%d\n", e); // 6
//      单目操作符:
//        ! 逻辑反操作
//        - 负值
//        + 正值
//        & 取地址
//        sizeof 操作数的类型长度（以字节为单位）
//        ~ 对一个数的二进制按位去反
//        -- 前置、后置 --
//        ++ 前置、后置 ++
//        * 间接访问操作符（解引用操作符）
//        (类型) 强制类型转化
    // 双目操作符
    // 三目操作符
//    int a = 10;
//    int b = 20;
//    a + b; // + 双目操作符
//    int a = 10;
//    printf("%d\n", a);  // 10
//    printf("%d\n", !a); // 0
    // c语言中 0 表示假  所有的非0 为真
//    int a = 10;
//    printf("%d\n", sizeof(a)); //4 sizeof计算的是变量 或者类型所占空间的大小 ，单位是字节
//    printf("%d\n", sizeof(int)); //4 sizeof计算的是变量 或者类型所占空间的大小 ，单位是字节
//    printf("%d\n", sizeof a); //4 sizeof计算的是变量 或者类型所占空间的大小 ，单位是字节
//    printf("%d\n", sizeof int); //error 计算变量时 可以简写， 计算类型时  不能简写
    int arr[10] = {0};
    printf("%d\n", sizeof arr); // 40
    // 计算数组的元素个数  数组总大小/ 每个元素的大小
    int len = sizeof(arr) / sizeof (arr[0]);
    printf("%d\n", len); // 10


    return 0;
}