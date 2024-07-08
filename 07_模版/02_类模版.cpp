/*
 * @file 02_类模版.cpp
 * @author by xianyang 
 * @time on 24-7-7
 * @description 
 */

#include <iostream>
using namespace std;

template <class T1,class T2>
class Person{
public:
	Person(T1 n1,T2 n2):age(n1),score(n2){}
	void setkey(T1 n1){
		age = n1;
	}
	void setvalue(T2 n2){
		score = n2;
	}
	T1 getkey(){
		cout<<age<<endl;
		return age;
	}
	T2 getvalue(){
		cout<<score<<endl;
		return score;
	}
private:
	T1 age;
	T2 score;
};

int main() {
	Person xiaoming(5.6,6);
//	xiaoming.setkey(18.6);
//	xiaoming.setvalue(99);
	xiaoming.getkey();
	xiaoming.getvalue();
	return 0;
}
