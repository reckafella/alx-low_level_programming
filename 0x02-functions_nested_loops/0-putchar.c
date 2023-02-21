#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Description: prints "_putchar" followed by a new line using write()
 *
 * Return: 0 if successful
 */

int main(void)
{
	char *ch = "_putchar\n";
	int length = 9;

	write(1, ch, length);

	return (0);
}
