#pragma once
#include <iostream>

using namespace std;

class MyStr
{
	char* str;
	int length;
	int static count;
public:
	//constructors and destructors
	MyStr();
	MyStr(int length);
	MyStr(const char* str);
	~MyStr();

	//inpute
	void Inpute();

	//output
	int Size() const;
	void Print() const;
	int Count();

	//operators
	void operator= (const MyStr& obj);
	void operator() () const;
	char operator[] (int index);
	operator int() const;

	//other
	void Cpy(MyStr& obj);
	bool Str(const char* str);
	int Chr(char c);
	void Cat(MyStr& obj);
	void DelChar(char c);
	int StrCmp(MyStr& obj);
};