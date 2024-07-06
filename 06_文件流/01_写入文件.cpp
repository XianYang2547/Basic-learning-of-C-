/*
 * @file 01_写入文件.cpp
 * @author by xianyang 
 * @time on 24-7-2
 * @description 
 */

#include <iostream>
#include "fstream"

//ofstream写操作
//ifstream读操作
//fstream读写操作
using namespace std;

int main() {
	ofstream file;//写操作 ofstream
	file.open("./06_文件流/test.txt");//打开方式先不用管
	if (file.is_open()) {//打开成功?
		cout << "file open succes" << endl;
	}
	file << "Writing to a file in C++" << endl;// endl换行
	file << "I can write more lines here\n";// \n换行
	file.close();
	return 0;
}
