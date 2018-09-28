/*************************************************************************
	> File Name: reference.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  9/28 12:08:56 2018
 ************************************************************************/

#include<iostream>
using namespace std;
int &demo1(){
    int a = 1;
    cout << "a = " << a << endl;
    return a;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return ;
}

void demo3(){
    int a = 5;
    const int &b = a;
    cout << "b = " << b << endl;
    int *p = const_cast<int *>(&b);
    cout << "*p = " << *p << endl;
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;
    cout << "p = " << p << endl;
    *p = 6;
    cout << "a = " << a << " b = " << b << " *p = " << *p  << endl;
    return ;
}

void demo4(){
    const int &a = 1;
    int *p = const_cast<int *>(&a);
    *p = 6;
    cout << "a = " << a << endl;
}

void demo5(){
    //static int &a = 1;
    //报错，非const类型左值不能绑定一个常量；
    return;
}

int main(){
    int a = 1;
    int &b = a;
    b = 3;
    cout << "a = "<<a << " b = "<< b << endl;
    //int &c = 1;
    //报错， 不能给字面常量起别名；
    demo3();
    demo4();
    int c = demo1();
    return 0;
}
