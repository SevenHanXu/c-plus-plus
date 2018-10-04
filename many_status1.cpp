/*************************************************************************
	> File Name: many_status1.cpp
	> Author: 
	> Mail: 
	> Created Time: 四 10/ 4 17:15:43 2018
 ************************************************************************/

#include <iostream>
using namespace std;

class Animal{
public:
	Animal(const string &name) : __name(name){}
	virtual void run() = 0;
private:
	string __name;
};

class Cat : public Animal{
public:
	Cat() : Animal("Cat"){}
	void run() override{
		cout << "I can run with four legs" << endl;
	}
};



int main(){
	Cat a;
	Animal m;
	m.run();
	Animal &b = a;
	Animal *c = &a;
	a.run();
	b.run();

	return 0;
}
