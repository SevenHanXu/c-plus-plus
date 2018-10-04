/*************************************************************************
	> File Name: template_test4.cpp
	> Author: 
	> Mail: 
	> Created Time: 四 10/ 4 21:39:10 2018
 ************************************************************************/

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

template<typename T>
struct Test{
    template<typename U>
    U add(U a, U b){
        return a + b;
    }
};


int main(){
    Test<int>t1;
    Test<int>t2;
    cout << t1.add(2, 3) << endl;//t1和t2是同一个类；模版会在作用域内部扩展，在同一个类内部重载；
    cout << t2.add(2.3, 3.4) << endl;
    Test<double>t3;//t1与t3不是同一个类；
    return 0;
}
