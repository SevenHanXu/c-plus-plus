/*************************************************************************
	> File Name: const.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  9/17 14:30:43 2018
 ************************************************************************/

#include<iostream>
using std::cout;
using std::endl;
int main(){
    const int a = 5;
    int *p = (int *)&a;
    *p = 8;
    cout << a << " , " << *p << endl;
    return 0;
}
//输出为5和8，但是在正常的linux系统中，c++定义const之后是不能改变他得值的，这与编译器有关
