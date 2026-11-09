#include <stdlib.h>
#include <stdio.h>

void affiche_message (char *message);

void affiche_message (char *message)
{
	printf("%s\n", message);
}

int main()
{
	char *message = "Bonjour tout le monde !";
	affiche_message(message);
	exit(0);
}
