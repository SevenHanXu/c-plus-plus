/*************************************************************************
	> File Name: fun_rewrite.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  9/28 17:04:03 2018
 ************************************************************************/

#include<iostream>
using std::endl;
using std::cout;
using std::cin;

class Father{
    public:
        int value;
        Father();
        void print();
        int add(int v);
};

Father::Father(){
    cout << "Father()" << endl;
}

void Father::print(){
    cout << "I'm Father! " << endl;
}

int Father::add(int v){
    value += v;
    return value;
}

class Child : public Father{
    public:
        int value;
        Child();
        void print();
        int add(int v1, int v2);
};

Child::Child(){
    cout << "Child()" << endl;
}

void Child::print(){
    cout << "I'm Child!" << endl;
}

int Child::add(int v1, int v2){
    value += (v1 + v2);
    return value;
}

void how_to_select(Father *p){
    p->print();
}

int main(){
    Father *father = new Father();
    Father *child = new Child();
    Father *father1 = child;
    Father &father2 = *child;
    father1->add(1);
    how_to_select(father);
    how_to_select(child);
    return 0;
}



