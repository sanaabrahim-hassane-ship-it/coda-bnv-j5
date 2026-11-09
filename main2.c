#include <stdlib.h>
#include <stdio.h>

int somme(int nb1, int nb2);

int somme(int nb1, int nb2)
{
	int resultat = nb1 + nb2;
	return resultat;
}
int main()
{
	int nb1 = 10;
	int nb2 = 15;

	int resultat = somme(nb1, nb2);
	printf("la somme de %d + %d = %d\n", nb1, nb2, resultat);

	exit(0);
}
