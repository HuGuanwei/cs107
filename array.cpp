#include <iostream>
using namespace std;


/*

[44][][][][][][][][][100]

array == &array[0]
array + k == &array[k]
*array == array[0]
*(array + k) == array[k]


*/

int main() {
	int array[10];
	array[0] = 44;
	array[9] = 100;
	array[5] = 45;
	//array[10] = 1;
	//array[-9] = -77;
	cout << array << endl;
	cout << &array[2] << endl;	


	int arr[5];
	arr[3] = 128;
	((short*)arr)[7] = 2;
	cout << arr[3] << endl;

	// [][][][] [][][][] [][][][] [00000000][00000010][00000000][10000000] [][]
	// Expect 131,200 = 2^17 + 128;
	return 0;
}


