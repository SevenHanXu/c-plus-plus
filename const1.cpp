/*************************************************************************
	> File Name: const1.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  9/17 14:37:15 2018
 ************************************************************************/

#include<iostream>
using std::string;
using std::cin;
using std::endl;
using std::cout;
class A{
    private:
        int m;
    public:
    A(int v){
        m = v;
        cout << "m = " << m << endl;
    }
};
class Test{
    private:
        const int a;//因为a没有初始化，所以它还没有放到符号表里面，所以a在后续的函数中还可以改；
                    //如果程序为const int a = 1，那么就不能改动它的值；
        A a2;
        A a1;
        A a3;
    public:
    Test():a(1), a1(1), a2(2), a3(3){
       //成员属性声明顺序才是初始化列表的初始化顺序； 
    }
    void setA(int v){
        int *p = const_cast<int*> (&a);
        *p = v;
        return ;
    }
    int getA(){
        return a;
    }
};
int main(){
    Test t;
    cout << t.getA() << endl;
    t.setA(6);
    cout << t.getA() << endl;
    return 0;
}
