#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS 1


//1234
void print(int n) {
    if (n > 9) {
        print(n / 10); //123
    }
    printf("%d\n", n);  //进栈   由外到内打印
}
//str是一个指针变量
/*int  my_strlen(char* arr)
{
    int count = 0;
    //计算字符串的长度
    while(*arr != '\0')
    {
        count++;
        arr++;  //指针++
    }
    return count;

}*/
//大事化小
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0

//bit\0
int my_strlen(char *arr) {

    if (*arr != 0) {
        return 1 + my_strlen(arr + 1);  //递归回溯
    } else {   //首字母为0
        return 0;
    }
}

//求n的阶乘
int fac(int n) {
    int num = 0;
    for (int i = 1; i <= n; i++) {
        num = num * i;
    }
    return num;
}

//n! = n*n-1*......1
int fac2(int n) {

    if (n == 0) {
        return 1;
    }
    return n * fac2(n - 1);
}

//求第n个数的斐波那契数列
// 1 1 2 3 5 8 13 ....
int fib(int n) {
    if (n <= 2) {
        return 1; //前两项
    } else {
        return fib(n - 1) + fib(n - 2); //前两项之和
    }
}

//循环实现fib
// 1 1 2 3 5 8 13 ....
// a b c
int for_fib(int n) {
    int a = 1;
    int b = 1;
    int c = 1;
    while (n>2) {
        c = a + b;
        a = b;
        b = c;

        n--;
    }
    return c;


}


//P11 -10函数和递归
int main() {

    //打印1234
//    print(1234);


    //2:
    char arr[] = "bit";
//    int len = strlen(arr); //求字符串长度
//    printf("%d\n",len); //3


    //自定义方法 实现求字符串的长度
    int len = my_strlen(&arr); //数组传参 传递过去的是第一个元素的地址
//    printf("%d\n", len);

//    printf("%d\n", fac2(3));


    printf("%d\n", for_fib(40));


    return 0;
}


//汉诺塔
//青蛙跳台阶
