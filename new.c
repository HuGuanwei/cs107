#include "swap.c"


/*


vp1 -> husband -> [F|r|e|d|1|0]
vp2 -> wife  -> [W|i|l|m|a|1|0]


*/

int main() {
	
	int a = 18;
	int b = 89;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("-----swap(a, b)-----\n");
	swap(&a, &b, sizeof(int));
	printf("a = %d, b = %d\n", a, b);

	printf("\n");

	char *husband = strdup("Fred");
	char *wife = strdup("Wilma");
	printf("Husband: %s, Wife: %s \n", husband, wife);
	printf("--------SWAP--------\n");
	swap(&husband, &wife, sizeof(char *));
	printf("Husband: %s, Wife: %s \n", husband, wife);

	return 0;
}
