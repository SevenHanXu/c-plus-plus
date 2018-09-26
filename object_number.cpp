/*************************************************************************
	> File Name: object_number.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  9/26 10:20:01 2018
 ************************************************************************/

#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
class Test{
	private:
		static int cnt;
		int a;
	public:
		Test(){cnt++;}
		
		~Test(){cnt--;}
		
		static int getCnt(){
			return cnt;//静态方法可以访问静态变量
		}
		
		static int getA(Test &t){
			return t.a;
		}
};

int Test::cnt = 0;//类属性要初始化；

int main(){
	cout << Test::getCnt() << endl;	
	Test t;
	cout << t.getCnt() << endl;	//对象可以使用类方法；
	cout << sizeof(t) << endl;
	return 0;
}
