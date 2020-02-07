#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {

	setlocale(LC_ALL, "fr-FR");
	printf("test");

	return 0;
}