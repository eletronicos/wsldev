# include <stdio.h>

int main(){
	int a = 2;
	int b = -3;

	a <<= 12;
	b >>= 3;

	int c = a & b;
	int d = a ^ b;
	int e = a || b;

	printf("a = %d, b = %x, c = %d, d = %d, e = %d\n", a, b, c, d, e);

	return 0;
}
