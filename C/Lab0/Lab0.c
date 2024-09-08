#include <locale.h>
#include <stdio.h>

void date();
void name();

void main()
{
	setlocale(LC_ALL, "RUS");
	name();
	date();
	getchar();
}

void date()
{
	puts("/ -   /|  /| /|    __   /  ");
	puts("  /    |   |  |   |  | /__ ");
	puts(" /     |   |  |   |  | |  |");
	puts("/__    | . |  | . |__| |__|");

}
void name()
{
	puts("\t\t\t\t *******************************************");
	puts("\t\t\t\t *                                         *");
	puts("\t\t\t\t * тема: Разработка консольного приложения *");
	puts("\t\t\t\t *    Выполнил Казанин А.В                 *");
	puts("\t\t\t\t *                                         *");
	puts("\t\t\t\t *******************************************");
}
