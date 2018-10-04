/*************************************************************************
	> File Name: many_status2.cpp
	> Author: 
	> Mail: 
	> Created Time: 四 10/ 4 19:18:01 2018
 ************************************************************************/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;


class HashFunc{
public:
	virtual int operator()(const char *str) const{//const对象只能用const方法；
		int hash = 0;
		for(int i = 0; str[i]; i++){
			hash = (hash << 5) ^ str[i] ^ (hash >> 3);
		}
		return (hash & 0x7fffffff);
	}
};

//哈希函数和冲突处理；
class HashTable{
public:
	HashTable(const HashFunc &func) : __func(&func){}
	int get_hash(const char *str){
		return (*(this->__func))(str);
	}
private:
	const HashFunc *__func;
};

class my_HashFunc : public HashFunc{
public:
	int operator()(const char *str) const override{
		int hash = 0;
		for(int i = 0; str[i]; i++){
			hash = (hash << 7) ^ str[i] ^ (hash >> 5);
		}
		return (hash & 0x7fffffff);
	}
};

int main(){
	HashFunc hf;
	HashTable ht(hf);
	my_HashFunc hf2;
	HashTable ht2(hf2);
	cout << ht.get_hash("haizei") << endl;
	cout << ht2.get_hash("haizei") << endl;
	return 0;
}
