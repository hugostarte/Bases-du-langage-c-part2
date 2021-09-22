
// Pour le 3 :s
#include <stdio.h> 
int main (void)
{
	int i=5, j=2;
	float f;
	f=4*((float)i/(float)j);
	printf("La valeur de f, apr`es des applications locaux de l’ope ́rateur cast, est : %f. \n", f); 
	// retourne "La valeur de f, apr`es des applications locaux de l’ope ́rateur cast, est : 10.000000. "
	return (0);
}








/*	Pour le 1

	#include <stdio.h> 
	int main (void)
	{
		int i=5, j=2;
		float f;
		f=4*(i/j);
		printf("La valeur de f est : %.f. \n", f); // Retourne "La valeur de f est 8"
		return (0);
	}
*/


/*
Pour le 2

	#include <stdio.h> 
	int main (void){
		int i=5, j=2;
		float f;
		f=4*(float)(i/j);
		printf("La valeur de f, apr`es une application globale de l’ope ́rateur cast, est : %f. \n", f); 
		// retourne "La valeur de f, apr`es une application globale de l’ope ́rateur cast, est : 8.000000."
		return (0);
	}
*/