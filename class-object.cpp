

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ostream;//std::c++标准库命名空间;

struct Point{
	Point(int x, int y) : x(x), y(y){};
	Point(const Point &a) : x(a.x), y(a.y){};
	int x, y;
};//两个整型；

/*
struct Test{
	Test(int x, int y) : p2(x, y), p1(p2){};
	Point p1;
	Point p2;
};//由于p1先声明的，所以先析构p1,就会报warning；
*/

struct Test{
	Test(int x, int y) : p1(x, y), p2(p1){
		Test::num++;//每增加一个Test，num就加一；
	}
	Test(const Test &a) : p1(a.p1), p2(a.p2){
		Test::num++;
	}//拷贝构造；

	Point p1;
	Point p2;
	static void count(){
		cout << "All Test Object : " << Test::num << endl;
		return ;
	}
private:
	static int num;//所有Test类型对象的个数；类属性；声明，需要在类外部初始化,static关键字只能在类声明的时候调用；
};//两个Point；

int Test::num = 0;//命名空间;

ostream & operator << (ostream &out, Point &a){
	out << "(" << a.x << "," << a.y << ")" << endl;
	return out;
}

Test func(){
	Test temp(5, 6);
	Test::count();
	return temp;
}

int main(){
	Test a(2, 3), b(1, 2);
	// cout << a.p1;
	Test::count();
	Test c = func();
	Test::count();
	cout << a.p2;
	cout << sizeof(Test) << " " << sizeof(Point) << endl;
	return 0;
}
//1.开辟对象数据区；2.匹配构造函数；3.完成最终的构造；相当于对数据区初始化，与成员无关，只与对象有关；
//所有对象公用一套地址类型，只要知道类型，就知道可以用哪种方法，不可以用哪种方法；
//**虚函数会影响类的大小，普通的成员函数跟着类走，虚函数是跟着对象走的；
