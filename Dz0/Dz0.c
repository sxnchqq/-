#include <stdio.h>
#include <locale.h>

void name();

void main()
{
	name();
	setlocale(LC_ALL, "RUS");
}

void name()
{
	puts("  /---\\             |-\\     ");
	puts(" /     \\            |  \\    ");
	puts("/       \\           |___\\   ");
	puts("|-------|            |        ");
	puts("|   __  |        ____|____    ");
	puts("|  |  | |        \\        /  ");
	puts("|__|__|_|         \\______/   ");
}