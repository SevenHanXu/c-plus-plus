/*************************************************************************
	> File Name: template_test1.cpp
	> Author: 
	> Mail: 
	> Created Time: 四 10/ 4 20:48:04 2018
 ************************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

template <typename T, typename ...REST>
struct ARG{
	typedef T __type;
	typedef ARG<REST...> __rest;
};

template <typename T>
struct ARG<T>{
	typedef T __type;
    typedef T __last;
};

template <typename T, typename ...ARGS> struct Test;
template <typename T, typename ...ARGS>
struct Test<T(ARGS...)>{
	T operator()(typename ARG<ARGS...>::__type a, typename ARG<ARGS...>::__rest::__last b){
		return a + b;
	}
};

int main(){
	Test<double(int, double, char)> t1;
	Test<double(int, double, char)> t3;//在宏中两个一样的类型被替换了两次，会报错的；
	Test<int(int, double, char)> t2;
	cout << t1(2, 3) << endl;
	return 0;
}



