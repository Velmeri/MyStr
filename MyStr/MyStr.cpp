#include "MyStr.h"

MyStr::MyStr()
{
	length = 80;
	str = new char[length];
}

MyStr::MyStr(int length)
{
	this->length = length;
	str = new char[length];
}

MyStr::MyStr(const char* str)
{
	length = strlen(str);
	this->str = new char[length];
	for (int i = 0; i < length; i++)
		this->str[i] = str[i];
}

MyStr::~MyStr()
{
	delete[] str;
}
