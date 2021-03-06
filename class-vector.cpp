/*************************************************************************
	> File Name: class-vector.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  9/17 14:07:21 2018
 ************************************************************************/

#include<iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
class Array{
    private:
        int m_len;
        int *data, temp;
    public:
    Array(){
        m_len = 0;
        data = new int[getLen()];
    }
    Array(int l){
        m_len = l;
        data = new int[getLen()];
        for(int i = 0; i < getLen(); i++){
            data[i] = 0;
        }
    }
    Array(const Array & obj){
        m_len = obj.m_len;
        data = new int[m_len];
        for(int i = 0; i < m_len; i++){
            data[i] = obj.data[i];
        }
    }
    int getLen(){
        return m_len;
    }
    int &operator[](int index){
        if(index >= 0 && index < getLen()){
            return data[index];
        }else{
            cout << "index out range" << endl;
            
        }
        return temp;
    }
};

int main(){
    Array a(5);
    a[10000] = 6;
    for(int i = 0;i < a.getLen(); i++){
        a[i] = i;
    }
    for(int i = 0; i < a.getLen(); i++){
        cout << "a[" << i << "]=" << a[i] << endl;
    }
    return 0;
}
