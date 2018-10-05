/*************************************************************************
	> File Name: template_test6.cpp
	> Author: 
	> Mail: 
	> Created Time: 五 10/ 5 09:17:53 2018
 ************************************************************************/

#include<iostream>
using namespace std;

template<typename T>
T add(T a, T b){
    cout << "T add(T a, T b)" << endl;
    return a + b;
}

template<>
int add(int a, int b){
    cout << "template add(int a, int b)" << endl;
    return a + b;
}

int add(int a, int b){
    cout << "int add(int a, int b)" << endl;
    return a + b;
}

int main(){
    double a = 0.1, b = 0.2, c;
    c = add(a, b);
    int x = 1, y = 2, z;
    z = add<>(x, y);
    return 0;
}
