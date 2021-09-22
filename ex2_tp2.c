#include <stdio.h>

int main()
{
	unsigned int a, b,c;
	// a
	printf("Veuillez saisir une valeur de a : ");
	scanf("%d", &a);
	printf("a = %d \n",a);
	// b
	printf("Veuillez saisir une valeur de b : ");
	scanf("%d", &b);
	printf("b = %d \n", b);
	// c
	printf("Veuillez saisir une valeur de c : ");
	scanf("%d", &c);
	printf("c = %d \n", c);
	printf("Merci bien ! \n");

	// Si on entre autre chose qu'un entier le programme nous sort "Command not find".
    return 0;
}
