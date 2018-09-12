/*************************************************************************
	> File Name: inherit-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  9/12 20:44:04 2018
 ************************************************************************/
#include <iostream>
#include <string.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Animal{
    Animal(string name) : name(name){
        cout << "Animal constructor" << endl;
    }
private:
    string name;
};

struct Bat : public Animal{
    Bat() : Animal("Bat"){
        cout << "Bat constructor" << endl;
    }
    int x;
};

template <typename T> 
class Array{
public:
    Array(int n) : n(n){
        this->data  = (T *)malloc(sizeof(T) * n);
    }
    T &operator[](int ind){
        if(ind < 0 || ind >= this->n) return this->temp;
        return this->data[ind];
    }
    void output(){
        for(int i = 0; i < this->n; i++){
            cout << this->data[i] << endl;
        }
    }
private:
    int n;
    T *data, temp;
};

int main(){
    Array <int> arr(10);
    for(int i = 0; i < 10; i++){
        arr[i] = i + 1;
    }
    arr.output();
    return 0;
}
