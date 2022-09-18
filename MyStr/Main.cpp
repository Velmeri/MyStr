#include <iostream>
#include "MyStr.h"

using namespace std;

int main() {
	MyStr A("123");
	MyStr B("Hello WORLD");
	A = B;

	A.Print();

	return 0;
}