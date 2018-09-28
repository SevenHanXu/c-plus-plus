/*************************************************************************
	> File Name: father_child_equalname.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  9/28 15:45:26 2018
 ************************************************************************/

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

class Father{
    public:
        int value;
};

class Child : public Father{
    public:
        int value;
};

int main(){
    Child child;
    child.value = 100;
    cout << child.value << endl;
    return 0;
}
