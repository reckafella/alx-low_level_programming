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
	int integer;
	long l_int;
	long long int ll_int;
	char char_;
	float flo_at;
	double dou_ble;

	printf("Size of an int: %ld byte(s)\n", (long int) sizeof(integer));
	printf("Size of a char: %ld byte(s)\n", (long int) sizeof(char_));
	printf("Size of a long int: %ld byte(s)\n", (long int) sizeof(l_int));
	printf("Size of a long long int: %ld byte(s)\n", (long int) sizeof(ll_int));
	printf("Size of a float: %ld byte(s)\n", (long int) sizeof(flo_at));
	printf("Size of a double: %ld byte(s)\n", (long int) sizeof(dou_ble));

	return (0);

}
