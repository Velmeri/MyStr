#pragma once
#include <iostream>

using namespace std;

class MyStr
{
	char* str;
	int length;
public:
	MyStr();
	MyStr(int length);
	MyStr(const char* str);
	~MyStr();
};

