/*************************************************************************
	> File Name: template_test2.cpp
	> Author: 
	> Mail: 
	> Created Time: 四 10/ 4 21:16:00 2018
 ************************************************************************/

#include <iostream>
#include <type_traits>//小技巧，模版萃取
using std::cin;
using std::cout;
using std::endl;
using std::conditional;//可以看成三目运算符，如果条件成立返回第一项，条件不成立返回第二项；

template <typename T>
T add(T a, T b){
	cout << "call add 1" << endl;
	return a + b;
}

template <typename T, typename U>
typename conditional<(sizeof(T) > sizeof(U)), T, U>::type
add(T a, U b){
	cout << "call add 2" << endl;
	return a + b;
}

int main(){
	cout << add(2, 3.2) << endl;//int add(int, double);当用第二个模版编程时输出5，而不是5.2，所以要返回size范围更大的结果，需要模版萃取；
	cout << add(2.2, 3.3) << endl;//double add(double, double);
	std::string a = "hello", b = " world";
	cout << add(a, b) << endl;//string add(string, string);
	return 0;
}



