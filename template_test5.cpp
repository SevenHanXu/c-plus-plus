/*************************************************************************
	> File Name: template_test5.cpp
	> Author: 
	> Mail: 
	> Created Time: 四 10/ 4 21:57:26 2018
 ************************************************************************/

#include <iostream>//《模版源编程》
using std::cin;
using std::cout;
using std::endl;

template<typename T, typename ...ARGS>
struct ARG{
	typedef T type;
	typedef ARG<ARGS...> rest;
};

template<typename T>
struct ARG<T>{
	typedef T type;
	typedef T last;
};


template<typename T, typename ...ARGS> struct Test;
template<typename T, typename ...ARGS>
struct Test<T(ARGS...)>{
	typename ARG<ARGS...>::type a;
	typename ARG<ARGS...>::rest::type b;
};

int main(){
	Test<double(int, double)> t;
	cout << sizeof(t.a) << endl;
	cout << sizeof(t.b) << endl;
	return 0;
}



