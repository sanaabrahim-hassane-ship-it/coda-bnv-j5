#include <stdlib.h>
#include <stdio.h>

double moyenne(double nb1, double nb2, double nb3);

double moyenne(double nb1, double nb2, double nb3)
{
	double resultat = (nb1 + nb2 + nb3) / 3;
	return resultat;
}

int main()
{
	double number1 = 5;
	double number2 = 15;
	double number3 = 8;

	double resultat = moyenne(5, 15, 8);
	printf("la moyenne de (%.1f + %.1f + %.1f) / 3 = %.2f\n", number1, number2, number3, resultat);
	exit(0);
}
