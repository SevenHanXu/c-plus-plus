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
        int *data;
    public:
        P(){
            a = 0;
            cout << "P() " << endl;
        }//函数返回值没有，构造函数名必须和类名相等i；
         P(string name){
             cout << "P(string)" << endl;
            this->m_name = name;
        }
        P(const P& obj){
            a = obj.a;
            m_name = obj.m_name;
            data = new int;
            *data = *obj.data;
        }
        void setValue(int v);
        int getValue();
        string getname();
        int *getADD();
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
int *P::getADD(){
    return data;
}
int main(){
    P p("wrf");
    P p1(p);
    cout << p.getname() << " " << p1.getname() << endl;
    cout << p.getADD() << " " << p1.getADD() << endl;
    //P p;//栈
    //P *p1 = new P;//堆上，malloc也是在堆上；
    return 0;
}
