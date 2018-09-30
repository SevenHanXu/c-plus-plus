/*************************************************************************
	> File Name: queue_test.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/30 22:31:12 2018
 ************************************************************************/

#include <iostream>
#include <queue>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::queue;


int main() {
	queue <int> q;
	string opr;
	while(cin >> opr){
		if(opr == "push"){
			int value;
			cin >> value;
			q.push(value);
		}else if(opr == "pop"){
			if(q.empty()) {cout << "queue is empty" << endl;continue;}
			
			cout << "pop : " << q.front() << endl;
			q.pop();
		}else if(opr == "end"){
			break;
		}
	}
	return 0;
}
