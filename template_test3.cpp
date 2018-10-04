/*************************************************************************
	> File Name: template_test3.cpp
	> Author: 
	> Mail: 
	> Created Time: 四 10/ 4 21:27:17 2018
 ************************************************************************/

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

template <typename T>
void print(T a){
    cout << a << endl;
    return ;
}

template <typename T, typename ...ARGS>
void print(T a, ARGS... args){
    cout << a << " ";
    print(args...);
    return ;
}

int main(){
    std::string a = "hello";
    print(a, "world", "hahahah", 1, 2, 3.4, 5.678);
    return 0;
}
