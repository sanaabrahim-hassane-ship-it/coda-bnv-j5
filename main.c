#include <stdlib.h>
#include <stdio.h>

void affiche_message (char *message)
{
	printf("%s", message);
}

int main()
{
	char *message = "Bonjour tout le monde !\n";
	affiche_message(message);
	exit(0);
}
