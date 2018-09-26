/*************************************************************************
	> File Name: inherit_2.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  9/26 16:52:52 2018
 ************************************************************************/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
class Father {
    private:
        string m_name;
    public:
        Father();
        Father(string name);
        void print();
};

Father::Father() : m_name("base") {
    cout << "Father()" << endl;
} 

Father::Father(string name) : m_name(name) {
    cout << "Father(string name)" << endl;
}

void Father::print() {
    cout << m_name << endl;
}
class Child : public Father {
    private:
        int age;
    public:
        Child();
        Child(int m_age);
        void haha();
};

Child::Child() : age(10) {
    cout << "Child()" << endl;
}

Child::Child(int m_age) : age(m_age) {
    cout << "Child(int)" << endl;
}

void Child::haha() {
    cout << "hahaha" << endl;
}

int main() {
    Child c;
    c.print();
    Father f1 = c;
    Father f2;
    f2 = c;
    Father* f3 =  new Father();
    Father* f4 =  new Child(); // 实际上是父类指针
    delete f3;
    delete f4;
    return 0;
}

