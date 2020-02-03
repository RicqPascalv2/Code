#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
	setlocale(LC_ALL, "fr-FR");
	printf_s("HELLO WORLD !!!");

	return 0;
}