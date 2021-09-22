#include <stdio.h> 
#include <limits.h> 
int main (void)
{
	printf("Valeur minimale pour signed char : %d.\n",SCHAR_MIN);
	printf("Valeur maximale pour signed char : %d. \n",SCHAR_MAX);
	printf("Valeur maximale pour unsigned char. : %u. \n",UCHAR_MAX);
	printf("Valeur minimale pour un char. : %d. \n",CHAR_MIN);
	printf("Valeur maximale pour un char. : %d. \n",CHAR_MAX);
	printf("Valeur minimale pour un short int. : %d. \n",SHRT_MIN);
	printf("Valeur maximale pour un short int. : %d. \n",SHRT_MAX);
	printf("Valeur maximale pour un unsigned short int. : %u. \n",USHRT_MAX);
	printf("Valeur minimale pour un int. : %d. \n",INT_MIN);
	printf("Valeur maximale pour un int. : %d. \n",INT_MAX);
	printf("Valeur maximale pour un unsigned int. : %u. \n",UINT_MAX);
	printf("Valeur minimale pour un long int. : %ld. \n",LONG_MIN);
	printf("Valeur maximale pour un long int. : %ld. \n",LONG_MAX);
	printf("Valeur maximale pour un long int. : %lu. \n",ULONG_MAX);
	return (0); 
}