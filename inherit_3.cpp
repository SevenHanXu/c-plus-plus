/*************************************************************************
	> File Name: inherit_3.cpp
	> Author: 
	> Mail: 
	> Created Time: 四 10/ 4 15:44:55 2018
 ************************************************************************/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Animal{
public:
	Animal(string name) : __name(name){}
	void set_name(string name){
		this->__name = name;
	}
	void tell_me_your_name(){
		cout << "my name is : " << this->__name << endl;
	}
protected:
	string __name;
};

class Cat : protected Animal {
public:
	Cat(string name) : Animal(name){}
	void tell_me_your_name(){
		cout << "cat name is : " << this->__name << endl;
	}
private:
	int tail;
};

class HasTailCat : public Cat{
public:
	HasTailCat(string name) : Cat(name){
		
	}
};//覆盖继承，就近；

int main(){
	HasTailCat a("garfiled");
	a.tell_me_your_name();
	return 0;
}
