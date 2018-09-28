/*************************************************************************
	> File Name: many_inherit.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  9/28 20:02:58 2018
 ************************************************************************/

#include<iostream>
using namespace std;


class B {
    private:
        int mb;
};
class C {
    private:
        int mc;
};
class D : public C, public B {
    private:
        int md;
};
int main(){
    D d;
    B *p1 = &d;
    C *p2 = &d;

    void *p11 = p1;
    void *p22 = p2;
    if(p11 == p22){
        cout << "1" << endl;
    }else{
        cout << "2" << endl;
    }
    cout << "&d = " << &d << endl;
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
    cout << "p11 = " << p11 << endl;
    cout << "p22 = " << p22 << endl;
    return 0;
}
