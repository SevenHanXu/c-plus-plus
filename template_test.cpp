/*************************************************************************
	> File Name: template_test.cpp
	> Author: 
	> Mail: 
	> Created Time: 六  9/29 14:24:31 2018
 ************************************************************************/

#include <iostream>
using namespace std;
#define SWAP(t, a, b)\
	do{\
		t temp = a;\
		a = b;\
		b = temp;\
	}while(0)\
	
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void swap(double &a, double &b){
	double temp = a;
	a = b;
	b = temp;
}

void swap(float &a, float &b){
	float temp = a;
	a = b;
	b = temp;
}
class Test{
    public:
    Test(){}
};
template <typename T>
void mySwap(T &a, T &b){
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 1;
	int b = 2;
	SWAP(int, a, b);
	swap(a, b);
	cout << "a = " << a << " b = " << b << endl;
	double c = 4.1;
	double d = 7.0;
	swap(c, d);
	SWAP(double, c, d);
	cout << "c = " << c << " d = " << d << endl;
    string s1 = "hx";
	string s2 = "hhh";
	mySwap(s1, s2);
	cout << "s1 = " << s1 << " s2 = " << s2 << endl;
    Test t1;
    Test t2;
    mySwap(t1, t2);
	return 0;
}
