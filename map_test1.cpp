/*************************************************************************
	> File Name: map_test1.cpp
	> Author: 
	> Mail: 
	> Created Time: 一 10/ 1 08:29:39 2018
 ************************************************************************/

#include <iostream>
#include <stack>
#include <string>
#include <ext/hash_map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stack;
using __gnu_cxx::hash_map;


struct hash_string{
	size_t operator()(const string &a) const{
		int __h = 0;
		for(int i = 0; i < a.length(); i++){
			__h = (__h << 5) ^ a[i] ^(__h >> 3);
		}
		return (size_t )__h;
	}
};

int main() {
	hash_string hi;
	cout << hi("hanxu") <<endl;
	hash_map <string, double, hash_string> h;
	string opr;
	while(cin >> opr){
		if(opr == "insert"){
			string name;
			double height;
			cin >> name >> height;
			h[name] = height;
		}else if(opr == "search"){
			string name;
			cin >> name;
			if(h.find(name) == h.end()){
				cout << "oh no : " << name << "isn't in hashtable!" << endl;
			}else{
				cout << h[name] << endl;
			}
		}else if(opr == "end"){
			break;
		}
	}
	return 0;
}
