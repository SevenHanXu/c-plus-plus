/*************************************************************************
	> File Name: obj_and_refe.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  9/26 10:55:05 2018
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int &b = a;
    b = 3;
    cout << a << " " << endl;
    return 0;
}
