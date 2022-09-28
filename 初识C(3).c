//
// Created by Three on 2022/9/27.
//
#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
//字符串的介绍标志：'\0'
// '\0' 0, '0' 的区别
// '\0'  转义字符 - ascii码 - 0
// 0 数字0  - ascii码 -  48
// '0' 字符0
//
//int Max(int num1, int num2){
//    if(num2> num1){
//        return num2;
//    }else{
//        return num1;
//    }
//}
//
//int main(){
//    int a = 50;
//    int b = 20;
//    int max = Max(a, b);
//    printf("%d\n", max);
//    return 0;
//}

//int main() {
//    int arr[] = {1, 2, 3, 4, 5, 6};
//    printf("%d\n", sizeof arr);
//    return 0;
//}

//        ~ 对一个数的二进制按位去反
//        -- 前置、后置 --
//        ++ 前置、后置 ++
//        * 间接访问操作符（解引用操作符）
//        (类型) 强制类型转化

//int main() {
//    // ~ 按位取反（2进制位）
//    int a = 0; // 4个字节， 32bit位
//    // 00000000000000000000000000000000
//    // 按位取反
//    // 11111111111111111111111111111111
//    // 原码 反码 补码
//    // 负数在内存中存储的时候， 存储的是二进制的补码
//    int b = ~a; // b是有符号的整形
//    // 如果是有符号的二进制 那么二进制的第一位 为该数的符号
//    // 1010
//    // 0101
//    printf("%d\n", b); // -1 打印的是这个数的原码
//    // 11111111111111111111111111111111  补码 - 1 = 反码
//    // 11111111111111111111111111111110  反码 按位取反 = 原码
//    // 10000000000000000000000000000001  原码
//    return 0;
//}

//int main() {
//    int a = 10;
////    int b = a++;  // 后置 ++ 先使用 再++
////    int c = ++a; // 前置 ++  先++ 在使用
//    int b = a--;  // 后置 -- 先使用 在 --
//    int c = --a;
//    printf("a = %d b = %d c = %d", a, b, c);
//    return 0;
//}

//int main() {
//    int a = (int) 3.14;  // 强制类型转换
//    int b = (float) 3;
//    printf("%d\n", a);
//    printf("%f\n", b);
//
//    return 0;
//}

// 关系操作符 > >= < <= !=不等于 ==等于

// 逻辑操作符  && 逻辑与  || 逻辑或
//
//int main(){
//    // 真   假
//    // 0表示假， 非0 就是真
//    // && 逻辑与 (并且)
//    // & 按位与
//    // || 逻辑或
//    // | 按位或
//    int a = 3;
//    int b = 0;
//    int c = a && b;
//    int d = a || b;+
//    printf("%d\n", c);
//    printf("%d\n", d);
//    return 0;
//}
//

// 条件操作符（三目操作符）(三元表达式)
// exp1 ? exp2 : exp3
//
//int main() {
//    int a = 10;
//    int b = 20;
//    int max = 0;
//    if (a > b) {
//        max = a;
//    } else {
//        max = b;
//    }
//    max = (a > b ? a : b);
//    //     exp1  ? exp2 : exp3
//    // 当 exp1 为真时  exp2为表达式返回的结果
//    // 当 exp2 为假时   exp3 为表达式返回的结果
//    return 0;
//}

// 逗号表达式
// exp1, exp2, exp3, ... , expN


// 下标
//int Add(int num1, int num2) {
//    int sum = num1 + num2;
//    return sum;
//}
//
//int main() {
////    int arr[10] = {0};
////    arr[4] ; // [] 下标引用操作符
//    int a = 10;
//    int b = 20;
//    int sum = Add(a, b);  // ()函数调用操作符
//
//    return 0;
//}


// 结构操作符  . ->


//  只要时整数， 内存中存储的都是二进制的补码
//  第一位 为符号位  0位正数   1位负数
//  正数 ---  原码， 反码， 补码 相同
//  负数 -1 --->>>
//  原码 直接 按照 正负 写出二进制序列      1001
//  反码 原码的 符号位不变  其他位按位取反   1110
//  补码 反码 + 1                       1111

// typedef 类型定义  类型重定义
//int main() {
//    unsigned int a = 0; // unsigned 无符号的整形
//    // signed int = int （默认的signed省略了） 有符号的整形
//    typedef unsigned int u_int;
//    // 别名  unsigned int = u_int 重定义类型名
//    u_int b = 1;
//    return 0;
//}

// static
/*
在C语言中：
 static 是用来修饰变量和函数的
    1. 修饰局部变量 - 静态局部变量
    2. 修饰全局变量 - 静态全局变量
    3. 修饰函数 - 静态函数
 */
// static 修饰局部变量
// 局部变量的生命周期变长了，
// static 修饰全局变量
// 改变了全局变量的作用域 - 让静态的全局变量 只能在自己所在的原文件内部使用  出了原文件就没法使用了
// static 修饰函数
// 改变函数的作用域 - 说法不准确
// 正确的说法： 改变了函数的链接属性，
// 正常的一个函数 有外部链接属性的  被static 修饰后  变为 内部链接属性

// 声明外部函数
//关键字 返回的类型 函数名（参数类型， 参数类型）
extern int Add(int, int);

int main() {
    int a = 10;
    int b = 20;

    int sum = Add(a, b);
    printf("%d\n", sum);
    return 0;
}


//
//int main() {
//    // extern 声明外部符号的
//    extern int g_val;
//    printf("%d\n", g_val);
//    return 0;
//}

//void test() {
////    int a = 1; // 局部变量 函数执行完成后销毁
//    static int a = 1;  // a 是一个静态的局部变量
//    a++;
//    printf("a = %d\n", a);
//}
//
//int main() {
//    int i = 0;
//    while (i < 5) {
//        test();
//        i++;
//    }
//
//    return 0;
//}