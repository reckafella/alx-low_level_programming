#include <stdio.h>

/**
 * main - Entry point
 * Description: function uses sizeof() to \
 * determine size of different data types.
 *
 * Return: 0 if no error.
*/

int main(void)
{
	int i;
	long li;
	long lli;
	char c;
	float f;

	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));

	return (0);

}
