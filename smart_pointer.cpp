/*************************************************************************
	> File Name: smart_pointer.cpp
	> Author: 
	> Mail: 
	> Created Time: 六 10/20 11:43:38 2018
 ************************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::shared_ptr;

class A{
public:
	A() : a(1024){cout << "A constructor" << endl;}
	int a;
	~A(){
		cout << "A destructor " << endl;
	}
};


namespace haizei{
	template <typename T>
	class shared_ptr{
	public:	
		shared_ptr(){
			this->data = nullptr;
		}
		shared_ptr(T *obj){
			this->data = new std::pair<T *, int>(obj, 1);
		}
		shared_ptr(const shared_ptr<T> &p){
			this->data = p.data;
			this->data->second += 1;
		}
		
		T *operator->(){
			return this->data->first;
		}
		shared_ptr<T> &operator = (shared_ptr<T> &p){
			if(p.data){
				p.data->second += 1;
			}	
			if(this->data){
				this->data->second -= 1;
				if(this->data == 0){
					this->destory_ptr();
				}
			}
			if(this->data){
				this->destory_ptr();
			}
			this->data = p.data;
			return *this;
		}
		
		T operator*(){
			return *(this->data->first);
		}
		
		void destory_ptr(){
			if(!(this->data->second -= 1)){
				delete this->data->first;
				delete this->data;
				this->data = nullptr;
			}
			return ;
		}
		
		int use_count(){ 
			if(this->data == nullptr) return 0;
			return this->data->second;
			}
		
		~shared_ptr(){
			if(this->data == nullptr) return ;
			this->destory_ptr();
			return ;
		}
		
		
	private:
		std::pair<T *, int > *data;
	};
}

int main(){
	A *obj = nullptr;
	shared_ptr<A> p(new A()), q;
	cout << p.use_count()<< q.use_count() << endl;
	
	cout << "----------" << endl;
	return 0;
}
