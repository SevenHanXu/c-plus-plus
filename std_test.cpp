/*************************************************************************
	> File Name: std_test.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  9/ 7 22:12:55 2018
 ************************************************************************/
#include <iostream> //input output流
//#include <cstdio>//cstdio里面有printf和scanf

//using namespace std;//用标准命名空间的所有符号
using std::cin;
using std::cout;
using std::endl;
//用哪个标识符就std哪个标识符，尽量减少不必要的冲突；

/*int main(){
	int n;
	std::cin >> n;//c语言里面是右移；在c++中'>>'仍然是右移，c++可以重载操作符
	std::cout << n << std::endl;
	return 0;
}*/
//由于用了 using namesp std 就可以吧cin和cout之前的std省略

int main(){
	int n;
	cin >> n;
	cout << n << endl;
	return 0;
}
