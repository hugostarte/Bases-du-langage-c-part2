#include <stdio.h> 
#include <limits.h> 
int main (void)
{
	printf("Char = %lu \t unsigned char = %lu \n",sizeof(char),sizeof(unsigned char));
	printf("int = %lu \t unsigned int = %lu \t float = %lu \n",sizeof(int),sizeof(unsigned int),sizeof(float));
	printf("double = %lu \t long int = %lu \t short int = %lu \n",sizeof(double),sizeof(long int),sizeof(short int));

	return (0); 
}