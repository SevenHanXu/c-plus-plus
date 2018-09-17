/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  9/17 10:15:49 2018
 ************************************************************************/

#include<iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class P{
    private:
        int a;
    public:
        void setValue(int v);
        int getValue();
};
void P::setValue(int v){
    this->a = v;
    return ;
}

int P:: getValue(){
    return this->a;
}

int main(){
    P p;
    p.setValue(6);
    cout << p.getValue() << endl;
    return 0;
}
