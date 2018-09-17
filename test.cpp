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
        string m_name;
    public:
        P(){
            a = 0;
            cout << "P() " << endl;
        }//函数返回值没有，构造函数名必须和类名相等i；
         P(string name){
             cout << "P(string)" << endl;
            this->m_name = name;
        }
        void setValue(int v);
        int getValue();
        string getname();
};
void P::setValue(int v){
    this->a = v;
    return ;
}

int P::getValue(){
    return this->a;
}

string P::getname(){
    return this->m_name;
}

int main(){
    int *m = new int(1);
    int *a = new int [10];
    delete m;
    delete[] a;
    P *p = new P;
    P *p1 = new P("wrf");
    P *p2 = new P("fbq");
    cout << p1->getname() << " " << p2->getname() << endl;
    //P p;//栈
    //P *p1 = new P;//堆上，malloc也是在堆上；
    return 0;
}
