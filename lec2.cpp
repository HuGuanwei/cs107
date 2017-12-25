#include <iostream>
using namespace std;

int main() {

	int s = 67;
	char ch = s;
	cout << ch << endl;

	long l = 998;
	float f = *(float*)&l;
	cout << f << endl; 
	cout << l << endl;
	return 0;
}

/*

bool 
char					 1 byte                        

short -					 2 bytes
int   - > scalar number  4 bytes
long  -					 4 bytes

float					 4 bytes
double					 8 bytes


binary digit -> bit

	- A bit can store a 0 or 1.

	- A bit is a very small unit of memory that can distinguish
	  two different values. 

1 byte = 8 bits.

	- 8 bits can distinguish 2^8 = 256 numbers.

	-------------------------------------------------
	| 0/1 | 0/1 | 0/1 | 0/1 | 0/1 | 0/1 | 0/1 | 0/1 |
	-------------------------------------------------

	- 2^8 = 256

	- 'A' = 65 = 64 + 1 = 2^6 + 2^0 = 01000001


short: 2 bytes

binary addition

	  0111   	 15 + 1 = -16
	+ 0001
      ----
	  1000	

      

      0111
    + 1001       15 + -15 = 0 
      ----
	  0000
negative number : inverse, add one

-------------------------------------------------------------

char ch = 'A';
short s = ch;
cout << s << endl;

Expect 65.

ch    [65]
s  [0][65]

-------------------------------------------------------------

short s = 67;
char ch = s;
cout << ch << endl;

Expect C.

s  [0][67]
ch    [67]

-------------------------------------------------------------
pseudocode:

short s = 2^10 + 2^3 + 2^0;
int i = s;

s                     [00000100][00001001]
i  [00000000][0000000][00000100][00001001]

-------------------------------------------------------------

int i = 2^23 + 2^21 + 2^14 + 7;
short s = i;
cout << s << endl;

i [00000000][10100000][01000000][00000111] 
s                     [01000000][00000111]

Expect: 2^14 + 7

-------------------------------------------------------------

short s = -1;
int i = s;
cout << i << endl;

s 					  [11111111][11111111]
i [11111111][11111111][11111111][11111111]

Expect: -1


-------------------------------------------------------------

float - 4 bytes
	
	0.5 = 2^-1
	0.25 = 2^-2

		   exp
 sign bit  magnitude   .xxxx
[ 1 bit ]  [ 8 bits ]  [23 bits]

(-1)^s * (1.xxxxx) * 2^(exp-127)


	7.0 = 7.0 * 2^0 = 3.5 * 2^1 = 1.75 * 2^2

-------------------------------------------------------------

int i = 5;
float f = i;
cout << f << endl;

i [0][0][0][00000101]
5 = 1.25 * 2^2
exp = 129
xxx = 0.25

-------------------------------------------------------------

int i = 37;
float f = *(float*)&i;

-------------------------------------------------------------

float f = 7.0;
short s = *(short*)&f;
 
f [][][][]
s [][]


*/




