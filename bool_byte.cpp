/*************************************************************************
	> File Name: bool_byte.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  9/28 11:00:23 2018
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;
int main(){
    bool a, b;
    a = true;
    b = false;
    cout << "sizeof(bool) = " << sizeof(bool) << endl;
    a = a + 1;
    cout << "a = " << a << endl;
    a = a + b;
    cout << "a = " << a << endl;
    b = 0;
    cout << "b = " << b << endl;
    b -= 1;
    cout << "b = " << b << endl;
    return 0;
}
