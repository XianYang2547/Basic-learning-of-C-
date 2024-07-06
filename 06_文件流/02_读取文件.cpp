/*
 * @file 02_读取文件.cpp
 * @author by xianyang 
 * @time on 24-7-2
 * @description 
 */

#include <iostream>
#include "fstream"
#include "string"

using namespace std;

int main() {
	ifstream file("./06_文件流/test.txt"); //读操作 ifstream
	string line;
	if (file.is_open()) {
		while (getline(file, line)) {
			cout << line;
		}
	}
	file.close();
	return 0;
}
