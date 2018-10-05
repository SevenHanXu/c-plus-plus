/*************************************************************************
	> File Name: friend_test.cpp
	> Author: 
	> Mail: 
	> Created Time: 五 10/ 5 14:29:34 2018
 ************************************************************************/

#include<iostream>
using std::endl;
using std::cout;

class Complex{
private:
    int real;
    int imag;
public:
    Complex (int r, int i);
    Complex();
    void add(Complex &obj1, Complex &obj2);
    friend Complex sub(Complex &obj1, Complex &obj2);
    Complex mul(Complex &obj1, Complex &obj2);
    Complex div(Complex &obj1, Complex &obj2);
    friend  Complex operator+(Complex &obj1, Complex &obj2);
    void print();
};

Complex::Complex() : real(0), imag(0){
    
}

Complex::Complex(int r, int i) : real(r), imag(i){
    cout << "Complex(int r, int i)" << endl;
}

void Complex::add(Complex &obj1, Complex &obj2){
    real = obj1.real + obj2.real;
    imag = obj1.imag + obj2.imag;
}

Complex sub(Complex &obj1, Complex &obj2){
    int a = obj1.real - obj2.real;
    int b = obj1.imag - obj2.imag;
    Complex ret(a, b);
    return ret;
}

Complex Complex::mul(Complex &obj1, Complex &obj2){
    int a = obj1.real * obj2.real - obj1.imag * obj2.imag;
    int b = obj1.imag * obj2.real + obj1.real * obj2.imag;
    Complex ret(a, b);
    return ret;
}

Complex Complex::div(Complex &obj1, Complex &obj2){
    int temp = obj2.real * obj2.real + obj2.imag * obj2.imag;
    int a = obj1.real * obj2.real - obj1.imag * obj2.imag;
    int b = obj1.imag * obj2.real + obj1.real * obj2.imag;
    Complex ret(b / temp, a / temp);
    return ret;
}

void Complex::print(){
    cout << "ans = " << real << " + (" << imag << ")i" << endl; 
}

Complex operator+(Complex &obj1,  Complex &obj2){
    cout << "operator +" << endl;
    int a = obj1.real + obj2.real;
    int b = obj1.imag + obj2.imag;
    Complex ret(a, b);
    return ret;
}


int main(){
    Complex c1(1, 2);
    Complex c2(2, 4);
    c1.print();
    c1 = operator+(c1, c2);
    c1.print();
    return 0;
}
