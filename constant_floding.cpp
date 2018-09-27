/*************************************************************************
	> File Name: constant_floding.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/27 22:42:56 2018
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    const int i = 10;
    int *p = (int *)(&i);
    *p = 100;
    cout << "i的值为:" << i << endl;
    cout << "p的值为:" << *p << endl;
    cout << "i的地址为:" << &i << endl;
    cout << "p的地址为:" << p << endl;
    return 0;
}
