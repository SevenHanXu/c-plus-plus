/*************************************************************************
	> File Name: obj_and_refe.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  9/26 10:55:05 2018
 ************************************************************************/

#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return ;
}
int main(){
    int a = 5;
    int c = 6;
    int &b = a;
    b = 3;
    a = 10;
    swap(a, c);
    cout << a << " " << b << endl;
    cout << a << " "<< c << endl;
    return 0;
}
// type a;
// type &b = a;
