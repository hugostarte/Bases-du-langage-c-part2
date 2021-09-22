/* ***
Les huit erreurs de compilation ** */
#include <stdio.h> 
int main (void)
{
  int a=0, b=1, c;
  printf ("Merci de saisir un premier nombre. \n"); 
  scanf ("%d", &b);
  printf ("Merci de saisir un deuxieme nombre. \n"); 
  scanf ("%d", &c);
  a = b + c;
  if ( a > 1){
    printf ("La somme des deux nombres lus est strictement positive. \n"); 
  }
  return (0);
}
