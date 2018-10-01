/*************************************************************************
	> File Name: copyfun.cpp
	> Author: 
	> Mail: 
	> Created Time: 一 10/ 1 14:43:09 2018
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class People{
public:
	People(string x);
	People(const People &a);
	~People();
	void out();
	People operator = (const People &a){//返回&是为了减少拷贝操作；
		cout << this << "operator = is called" << endl;
		return *this;//提领操作，把里面的值拿出来
	}
private:
	string x;
};


People func(){
	People temp("test");
	return temp;
}


int main(){
	People a("hug");
	People b = func();
	a.out();
	b.out();
	(a = b).out();
	a.out();
	return 0;
}

People::People(string x) : x(x){
	cout << "constructor by " << this << endl;
}


People::People(const People &a){
	this->x = a.x + "0";
	cout << "copy construct called from " <<  &a << " to " << this << endl;
}

People::~People(){
	cout << this << " destroy " << endl;
}


void People::out(){
	cout << this << " name is " << this->x << endl;
}


