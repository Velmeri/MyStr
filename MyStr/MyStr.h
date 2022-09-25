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
	MyStr(MyStr&& obj);
	MyStr(initializer_list<char> arr);
	~MyStr();

	//inpute
	void Inpute();

	//output
	int Size() const;
	void Print() const;
	int Count() const;

	//operators
	void operator= (const MyStr& obj);
	MyStr& operator =(MyStr&& obj);
	void operator() () const;
	char operator[] (int index);
	operator int() const;
	friend ostream& operator<< (ostream& out, const MyStr& obj);
	friend istream& operator>> (istream & in, MyStr & obj);

	//other
	void Cpy(MyStr& obj);
	bool Str(const char* str) const;
	int Chr(char c) const;
	void Cat(MyStr& obj);
	void DelChar(char c);
	int StrCmp(MyStr& obj) const;
};