#include <stdio.h> 
int main (void)
{
	unsigned i = 14;
	printf("i donne : %d \n", i );
	printf("i << 1 donne : %d \n", i << 1);
	printf("i << 4 donne : %d \n", i << 4);
	printf("i >> 1 donne : %d \n", i >> 1);
	printf("i >> 4 donne : %d \n", i >> 4);
	printf("i && 1 donne : %d \n", i & 1);
	printf("i && 4 donne : %d \n", i & 4);
	printf("1 << 1 donne : %d \n", 1 << 1);
	printf("1 << 4 donne : %d \n", 1 << 4);
	return(0);
}