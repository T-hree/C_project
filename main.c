//
//
//#include <stdio.h>
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


#include <stdio.h>

int main() {
    char ch = 'A';
    printf("%c\n", ch);  // %c 打印字符格式的数据

    int age = 23;
    printf("%d\n", age); // %d 打印整形十进制数据

//    short int // 短整形
//    int 整形
//    long 长整形
//    long num = 100;
//    printf("%d\n", num);

    float f = 1.1;
    printf("%f\n", f);

    return 0;
}