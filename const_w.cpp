/*************************************************************************
	> File Name: const_w.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  9/26 11:18:54 2018
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    const int &b = 1;
    cout << b << endl;
    int *p3 = (int *) (&b);
    *p3 = 6;
    cout << b << endl;
    const int name1 = 10;
    const int &name2 = name1;//name2加了一个只读属性；
    const int name3 = 5;//放到符号表中，不能更改；不能做左值；
    cout << &name1 << " " << &name2 << endl;
    int *p = const_cast<int *> (&name2);
    int *q = const_cast<int *> (&name3);

    *p = 19;
    *q = 20;
    cout << "name1 = " << name1 << " name2 = " << name2;
    cout << " name3 = " << name3 << endl;
    return 0;
}
