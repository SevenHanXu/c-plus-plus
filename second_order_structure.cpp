/*************************************************************************
	> File Name: second_order_structure.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  9/26 10:23:47 2018
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;
using std::string;
using std::cout;
using std::cin;
using std::endl;
class Array{
    private:
        int mLen;
        int* data;
        Array(int len);
        bool construct();
    public:
        static Array* newInstance(int len);
        int length();
        bool setValue(int index, int v);
        bool getValue(int index, int &v);
        ~Array();
};

Array::Array(int len) : mLen(len) {
    //第一阶段构造
}

bool Array::construct() { // 第二阶段构造
    bool ret = true;
    data =  new int[mLen];
    if(data) {
        for(int i = 0; i < mLen; ++i) {
            data[i] = 0;
        }
    } else  {
        ret = false;
    }
    return ret;
}

Array* Array::newInstance(int len) {
    Array* ret = new Array(len);
    if(!(ret && ret->construct())) {
        delete ret;
        ret = NULL;
    } 
    return ret;
}

int Array::length() {
    return mLen;
}

bool Array::setValue(int index, int v) {
    bool ret = (index >= 0 && index < mLen);
    if(ret) {
        data[index] = v;
    }
    return ret;
}

bool Array::getValue(int index, int &v) {
    bool ret = (index >= 0 && index < mLen);
    if(ret) {
        v = data[index];
    }
    return ret;
}

Array::~Array() {
    delete[] data;
}

int main() {
    Array* obj = Array::newInstance(5);
    Array* obj2 = Array::newInstance(10);
    for(int i = 0; i < obj->length(); ++i) {
        obj->setValue(i, i + 1);
    }

    for(int i = 0; i < obj2->length(); ++i) {
        obj2->setValue(i, i + 1);
    }

    for(int i = 0; i < obj2->length(); ++i) {
        int v = 0;
        obj2->getValue(i, v);
        printf("b[%d] = %d\n", i, v);
    }

    for(int i = 0; i < obj->length(); ++i) {
        int v = 0;
        obj->getValue(i, v);
        printf("a[%d] = %d\n", i, v);
    }
    printf("%p\n", obj);
    printf("%p\n", obj2);
    delete obj;
    delete obj2;
    return 0;
}
