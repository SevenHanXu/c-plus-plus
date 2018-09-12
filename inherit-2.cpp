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
    Animal(string name) : name(name){}
private:
    string name;
};

struct Bat : public Animal{
    Bat() : Animal("Bat"){}
};

int main(){
    Bat b;
    return 0;
}
