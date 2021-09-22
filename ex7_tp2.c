#include <stdio.h> 
int main (void)
{
	unsigned char i; 
	i=250;
	i=i+6;
	printf("La valeur de i est %d \n", i); // Affiche  "La valeur de i est 0 ".
	return (0);
}

	// Il affiche O car le code ASCII = 256 correspond au caractère 0. 