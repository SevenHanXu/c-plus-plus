/*************************************************************************
	> File Name: f_c_compatible.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  9/28 16:57:08 2018
 ************************************************************************/

#include<iostream>
using std::endl;
using std::cout;
using std::cin;

class Father{};

class Child : public Father{};

int main(){
    Child child;
    Father f1(child);//子类对象可以直接初始化父类对象；
    Father f2 = child;//子类对象可以直接赋值给父类对象；
    Father *f3 = &child;//父类指针可以指向子类对象；
    Father &f4 = child;//父类引用可以直接引用子类；
    return 0;
}
