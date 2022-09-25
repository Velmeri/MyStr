#include <iostream>
#include "MyStr.h"

using namespace std;

int main() {
	MyStr A{'H', 'E', 'L', 'L', 'O'};

	A.Print();

	cin >> A;
	cout << A;

	return 0;
}