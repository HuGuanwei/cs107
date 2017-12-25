#include <iostream>
using namespace std;

struct fraction {

	int num;
	int denum;

};


/*

---------
|   7   | pi.denum
---------
|   22  | pi.num
---------


*/

int main() {
	
	fraction pi;
	pi.num = 22;
	pi.denum = 7;
	cout << "num:  " << pi.num << endl;
	cout << "denum: " << pi.denum << endl;
	cout << "address of pi:       " << &pi << endl;
	cout << "address of pi.num:   " << &pi.num << endl;
	cout << "address of pi.denum: " << &pi.denum << endl;

	((fraction*)&(pi.denum)) -> num = 12;
	((fraction*)&(pi.denum)) -> denum = 33;
	cout << pi.denum << endl;
	cout << pi.num << endl;
	

	return 0;
}
