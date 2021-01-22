# include <stdio.h>
# include "swap.h"

int main(){
	int a = 1, b = 2;

	swap(& a, & b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}
