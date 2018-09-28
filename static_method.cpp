/*************************************************************************
	> File Name: static_method.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  9/28 09:20:46 2018
 ************************************************************************/

#include<iostream>
using namespace std;

class Test{
    private:
        int t;
    public:
        static void f1();
        static void f2();
        static void setT(Test &obj, int v);
        static int getT(Test &obj);
        
};


void Test::f1(){
    cout << "static void f1()" << endl;
}

void Test::f2(){
    cout << "static void f2()" << endl;
}

void Test::setT(Test &obj,  int v){
    obj.t  = v;
    return ;
}

int Test::getT(Test &obj){
    return obj.t;
}


int main(){
    Test::f1();
    Test::f2();
    Test t;
    t.setT(t, 5);
    cout << t.getT(t) << endl;

    return 0;
}
