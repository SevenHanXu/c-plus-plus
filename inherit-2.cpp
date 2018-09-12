/*************************************************************************
	> File Name: inherit-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  9/12 20:44:04 2018
 ************************************************************************/
#include <iostream>
#include <string.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Animal{
    Animal(string name) : name(name){
        cout << "Animal constructor" << endl;
    }
private:
    string name;
};

struct Bat : public Animal{
    Bat() : Animal("Bat"){
        cout << "Bat constructor" << endl;
    }
    int x;
};

int main(){
    Bat b;
    cout << sizeof(Bat) << endl;
    //因为开辟一个子类的对象，不仅要开辟当前子类的空间，还需要开辟父类的空间；等于子类与父类相加之和；
    cout << sizeof(Animal) << endl;
    return 0;
}
