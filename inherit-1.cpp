/*************************************************************************
	> File Name: inherit-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  9/12 19:52:40 2018
 ************************************************************************/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct A{
public:
    A() : x(3) {}
    int x;
};

struct B : A{
    
};

int main(){
    B a;
    cout << a.x << endl;
    return 0;
}
