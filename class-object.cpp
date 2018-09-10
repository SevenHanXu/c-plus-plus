/*************************************************************************
	> File Name: class-object.cpp
	> Author: 
	> Mail: 
	> Created Time: 六  9/ 8 15:36:30 2018
 ************************************************************************/
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

struct Point{
    Point(int x, int y) : x(x), y(y){};
    Point(Point &a) : x(a.x), y(a.y){};
    int x, y;
};

/*
struct Test{
    Test(int x, int y) : p2(x, y), p1(p2){};
    Point p1;
    Point p2;
};//由于p1先声明的，所以先析构p1,就会报warning；
*/

struct Test{
    Test(int x, int y) : p1(x, y), p2(p1){};
    Point p1;
    Point p2;
};
    
ostream & operator << (ostream &out, Point &a){
    out << "(" << a.x << "," << a.y << ")" << endl;
    return out;
}

int main(){
    Test a(2, 3);
    // cout << a.p1;
    cout << a.p2;
    return 0;
}
