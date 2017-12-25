#include <iostream>
using namespace std;


void swap (int *ap, int *bp) {

	int temp = *ap;
	*ap = *bp;
	*bp = temp;
}


int main () {

	int	a = 18;
	int b = 32;
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}
