#include <iostream>
#include "MyStr.h"

using namespace std;

int main() {
	MyStr A("Hello ");
	MyStr B("WORLD");
	A.Cat(B);
	A.Print();

	return 0;
}