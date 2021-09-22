#include <stdio.h> 
int main (void)
{
	printf ("%cn Impression avec les codes ASCII ... %cn", 92, 92);
	return (0); 

	// Le programme de fonctionne pas bien car le code ASCII = 92 correspond a \ et non a un passage de ligne.
	// Il aurait du le remplacer par le code ASCII = 10 et supprimer les "n"
}