#include <stdio.h> 
int main (void)
{
	float a, b;
	scanf("%f", &a);
	printf("%0.10f", a);
	b = a*10;
	printf("%0.10f", b);
	return(0);
}