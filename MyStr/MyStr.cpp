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

int MyStr::Size() const
{
	return length;
}

void MyStr::Print() const
{
	for (int i = 0; i < length; i++)
		cout << str[i];
}

void MyStr::Cpy(MyStr& obj)
{
	length = obj.length;
	if (str != nullptr)
		delete[] str;
	str = new char[length];
	for (int i = 0; i < length; i++)
		str[i] = obj.str[i];
}

bool MyStr::Str(const char* str)
{
	int length2 = strlen(str);
	for (int i = 0; i < length; i++)
		if (this->str[i] == str[0]) {
			for (int j = 1; j < length2; j++)
			{
				if (this->str[i + j] == str[j])
					continue;
				delete[] str;
				return 0;
			}
			delete[] str;
			return 1;
		}
	delete[] str;
	return 0;
}

int MyStr::Chr(char c)
{
	for (int i = 0; i < length; i++)
		if (str[i] == c)
			return i;
	return -1;
}

void MyStr::Cat(MyStr& obj)
{
	char* PastStr = new char[length];
	for (int i = 0; i != length; i++)
		PastStr[i] = str[i];
	if (str != nullptr)
		delete[] str;
	int PastLength = length;
	length += obj.length;
	str = new char[length];
	for (int i = 0; i < PastLength; i++)
		str[i] = PastStr[i];
	for (int i = PastLength; i < length; i++)
		str[i] = obj.str[i - PastLength];
}