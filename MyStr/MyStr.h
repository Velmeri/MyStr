#pragma once
#include <iostream>

using namespace std;

class MyStr
{
	char* str;
	int length;
public:
	//constructors and destructors
	MyStr();
	MyStr(int length);
	MyStr(const char* str);
	~MyStr();

	//output
	int Size() const;
	void Print() const;

	//operators
	void operator= (const MyStr& obj);

	//other
	void Cpy(MyStr& obj);
	bool Str(const char* str);
	int Chr(char c);
	void Cat(MyStr& obj);
	void DelChar(char c);
	int StrCmp(MyStr& obj);
};