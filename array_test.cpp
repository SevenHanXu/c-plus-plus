/*************************************************************************
	> File Name: array_test.cpp
	> Author: 
	> Mail: 
	> Created Time: 六  9/ 8 12:26:24 2018
 ************************************************************************/
#include <iostream>
using std::cout;
using std::endl;

template <typename T>//模版；
struct array{
public:
    array(int n) : n(n){
        this->data = new T[n];
    }
    T & operator[](int ind){//重载操作， 可以避免出错，在出错是适当给予提示；
        if(ind >= n){
            cout << "index error :" << ind << "/" << endl;
            return this->temp;
        }
        return this->data[ind];
    }
private:
    T *data, temp;
    int n;
};

int main(){
    array<int>  a(10);
    a[10000] = 100;//加了temp之后，即使越界也不会出错；
    for(int i = 0; i < 10; i++){
        a[i] = i;
    }
    for(int i = 0; i < 10; i++){
        cout << a[i] << endl;
    }
    return 0;
}
