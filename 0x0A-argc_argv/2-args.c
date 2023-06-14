#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: n args
 * @argv: arr args
 * Editor : Yahya ESSABER
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}


