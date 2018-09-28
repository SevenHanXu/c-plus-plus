/*************************************************************************
	> File Name: static_test.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  9/28 09:09:43 2018
 ************************************************************************/

#include<iostream>
using namespace std;

class Test{
    private:
        int v1;
        static int v2;
    public:
        int v3;
        static int v4;
        void setV2(int v);
        int getV2();
};

int Test::v2 = 0;
int Test::v4 = 0;

void Test::setV2(int v){
    v2 = v;
    return ;
}

int Test::getV2(){
    return v2;
}

int main(){
    Test t;
    Test::v4 = 5;
    t.setV2(3);
    cout << t.getV2() << endl; 
    cout << Test::v4 << endl;

    return 0;
}
