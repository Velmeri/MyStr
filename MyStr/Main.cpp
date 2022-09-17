#include <iostream>
#include "MyStr.h"

using namespace std;

int main() {
	MyStr A("Hello World");
	A.DelChar('l');
	A.Print();

	return 0;
}