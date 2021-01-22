# include <stdio.h>
# include <stdlib.h>
# include "myCompare.h"
# define NUM 5

int main()
{
	unsigned int an[NUM] = {8, 123, 11, 10, 4};
	qsort(an, NUM, sizeof(unsigned int), myCompare);
	for(int i = 0; i < NUM; i++)
		printf("%d\n", an[i]);
	return 0;

}
