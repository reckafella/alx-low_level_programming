/**
 * _atoi - return an integer value of a converted string
 * @s: string input
 *
 * Return: int
 */

int _atoi(char *s)
{
	int number = 0;
	int i = 0;
	int sign = 1;

	if (s[0] == '-')
	{
		sign *= -1;
		s++;
	}

	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		number  = (number * 10) + (s[i] - '0');
		i++;
	}

	return (number * sign);
}
