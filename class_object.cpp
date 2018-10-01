/*************************************************************************
	> File Name: class_object.cpp
	> Author: 
	> Mail: 
	> Created Time: 一 10/ 1 13:59:35 2018
 ************************************************************************/

#include <iostream>
using namespace std;

class People{
public:
	People(const string name);
	void say(string word){
		cout << this->__name << " say : " << word << endl;
	}
	void set_name(string __name){
		this->__name = __name;
	}
private:
	string __name;
};



People::People(const string name){
	this->__name = name;
    cout << "People constructor" << endl;
}


int main(){
	People hanxu("hanxu");
	hanxu.say("I love you!");
	return 0;
}
