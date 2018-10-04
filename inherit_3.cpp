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
	Animal(string name) : __name(name){
		cout << "Animal constructor" << endl;
	}
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
	Cat() : Animal("temp_name"){
		cout << "Cat constructor" << endl;
	}
	Cat(string name) : Animal(name){
		cout << "Cat constructor" << endl;
	}
	void tell_me_your_name(){
		cout << "cat name is : " << this->__name << endl;
	}
private:
	int tail;
};


class Tail{
public:
	Tail(int length) :__length(length){}
private:
	int __length;
};

class HasTailCat : public Cat{
public:
	HasTailCat(string name) : tail(6){
		cout << "HasTailCat constructor" << endl;
		this->__name = name;
	}
private:
	Tail tail;
};//覆盖继承，就近；

int main(){
	HasTailCat a("garfiled");
	a.tell_me_your_name();
	return 0;
}
//构造函数调用顺序:(1)HasTailCat(2)Cat(3)Animal;
//构造函数完成顺序(1)Animal(2)Cat(3)HasTailCat;
//构造函数时，先去执行初始化列表，然后再去完成构造;
//父类的属性由父类进行构造

