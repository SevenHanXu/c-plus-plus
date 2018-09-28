/*************************************************************************
	> File Name: father_child_equalname.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  9/28 15:45:26 2018
 ************************************************************************/

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

class Father{
    public:
        int value;
        Father();
};

class Child : public Father{
    public:
        int value;
        Child();
};

Father::Father(){
    cout << "Father's value : " << &value << endl; 
}

Child::Child(){
    cout << "Child's value : " << &value << endl;
}

int main(){
    Child child;
    child.value = 100;
    child.Father::value = 1000;
    cout << &child.value << endl;
    cout << &child.Father::value << endl;
    return 0;
}
