/*************************************************************************
	> File Name: friend_test2.cpp
	> Author: 
	> Mail: 
	> Created Time: 五 10/ 5 16:04:00 2018
 ************************************************************************/

#include<iostream>
#include <cmath>
using std::endl;
using std::cout;

class Complex{
private:
    int real, imag;
public:
    Complex();
    Complex(int r, int i);
    Complex(const Complex &obj);
    int getReal() const;
    int getImag() const;
    Complex operator+(const Complex &obj);
    Complex operator-(const Complex &obj);
    Complex operator*(const Complex &obj);
    Complex operator/(const Complex &obj);
    bool operator == (const Complex &obj);  
    bool operator != (const Complex &obj);
    Complex operator = (const Complex &obj);
    void print();
};

Complex::Complex() : real(0), imag(0){
    cout << "without number constructor" << endl;
}

Complex::Complex(int r, int i) : real(r), imag(i){
    cout << "with number constructor" << endl;
}

Complex::Complex(const Complex &obj){
    
}

int Complex:: getReal() const{
    return this->real;
}

int Complex::getImag() const{
    return this->imag;
}

Complex Complex::operator+(const Complex &obj){
    int a = this->real + obj.real;
    int b = this->imag + obj.imag;
    Complex ret(a, b);
    return ret;
}
Complex Complex::operator-(const Complex &obj){
    int a = this->real - obj.real;
    int b = this->imag - obj.imag;
    Complex ret(a, b);
    return ret;
}
Complex Complex::operator*(const Complex &obj){
    int a = this->real * obj.real - this->imag * obj.imag;
    int b = this->imag * obj.real + this->real * obj.imag;
    Complex ret(a, b);
    return ret;
}
Complex Complex::operator/(const Complex &obj){
    double temp = obj.real * obj.real + obj.imag * obj.imag;
    double a = this->real * obj.real - this->imag * obj.imag;
    double b = this->imag * obj.real + this->real * obj.imag;
    Complex ret(b / temp, a / temp);
    return ret;
}
bool Complex::operator == (const Complex &obj){
    return (this->real == obj.real) && (this->imag == obj.imag);
}  
bool Complex::operator != (const Complex &obj){
    return !((this->real == obj.real) && (this->imag == obj.imag));
}
Complex Complex::operator = (const Complex &obj){
    this->real = obj.real;
    this->imag = obj.imag;
    Complex ret(this->real, this->imag);
    return ret;
}

void Complex::print(){
    cout << real << " + (" << imag << ")i" << endl;
}

int main(){
    Complex c1(1, 2);
    Complex c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
    Complex c4 = c1 - c2;
    c4.print();
    Complex c5 = c1 * c2;
    c5.print();
    Complex c6 = c1 / c2;
    c6.print();
    if(c5 == c6) cout << "c5 = c6" << endl;
    else cout << "c5 != c6" << endl;
    if(c5 != c6) cout << "c5 != c6" << endl;
    else cout << "c5 = c6" << endl;
    return 0;
}
