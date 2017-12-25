/*

double d = 3.1416;
char ch = *(char*)&d;




*/


#include <iostream>
using namespace std;

int main() {
	double d = 3.1416;
	char ch = *(char*)&d;
	cout << ch << endl;
	return 0;
}

