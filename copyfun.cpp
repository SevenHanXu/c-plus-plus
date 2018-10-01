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
	People operator = (People a){//返回&是为了减少拷贝操作；
		a.x = "you are 250";
		cout << this << "operator1 = is called" << endl;
		return a;//提领操作，把里面的值拿出来
	}
	int operator = (const int x){
		if(x == 1) {
			this->x = "100";
		}else{
			this->x = "200";
		}
		cout << this << "operator2 = is called" << endl;
		return 256;
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
	a = (a = b);//(1)b给a赋值，最后还要给()外的a赋值，所以要返回一个切切实实的对象，有一个拷贝构造并调用opreator1;(2)(a = b)的结果给a赋值，需要一次拷贝并调用opreator1(3)最后得到a之后也要返回一个对象，再拷贝一次
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


