/*************************************************************************
	> File Name: package.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  9/26 15:33:09 2018
 ************************************************************************/

#include<iostream>
using namespace std;

class Test{
    private:
        int a;
    public:
        int b;
        
        int getA();
        int getC();
    protected:
        int c;
};

int Test::getA(){
    return a;
}
int Test::getC(){
    return c;
}

int main(){
    Test t;
    t.b = 110;
    cout << t.getA() << endl;
    cout << t.getC() << endl;
    return 0;
}
