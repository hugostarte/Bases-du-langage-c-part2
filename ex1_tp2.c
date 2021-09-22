#include <stdio.h>

int main()
{
	unsigned int a, modulo;
	scanf("%d", &a);
	modulo = a % 100;
    printf("Les deux derniers chiffres du nombre : %d sont : %d.", a,modulo);

    return 0;
}
