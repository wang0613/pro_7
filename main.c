#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS 1


//1234
void print(int n) {
    if (n > 9) {
        print(n / 10); //123
    }
    printf("%d\n", n);  //��ջ   ���⵽�ڴ�ӡ
}
//str��һ��ָ�����
/*int  my_strlen(char* arr)
{
    int count = 0;
    //�����ַ����ĳ���
    while(*arr != '\0')
    {
        count++;
        arr++;  //ָ��++
    }
    return count;

}*/
//���»�С
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0

//bit\0
int my_strlen(char *arr) {

    if (*arr != 0) {
        return 1 + my_strlen(arr + 1);  //�ݹ����
    } else {   //����ĸΪ0
        return 0;
    }
}

//��n�Ľ׳�
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

//���n������쳲���������
// 1 1 2 3 5 8 13 ....
int fib(int n) {
    if (n <= 2) {
        return 1; //ǰ����
    } else {
        return fib(n - 1) + fib(n - 2); //ǰ����֮��
    }
}

//ѭ��ʵ��fib
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


//P11 -10�����͵ݹ�
int main() {

    //��ӡ1234
//    print(1234);


    //2:
    char arr[] = "bit";
//    int len = strlen(arr); //���ַ�������
//    printf("%d\n",len); //3


    //�Զ��巽�� ʵ�����ַ����ĳ���
    int len = my_strlen(&arr); //���鴫�� ���ݹ�ȥ���ǵ�һ��Ԫ�صĵ�ַ
//    printf("%d\n", len);

//    printf("%d\n", fac2(3));


    printf("%d\n", for_fib(40));


    return 0;
}


//��ŵ��
//������̨��
