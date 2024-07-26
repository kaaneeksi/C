#include <stdio.h>
#include <unistd.h>

int palindrom(char *text)
{
	int size;
	int i;

	size = 0;
	i = 0;

	while (text[size] != '\0')
	{
		size++;
	}

	while (i < size / 2)
	{
		if ( text[i] == text[size - 1 - i])
		{
			i++;

		}
		else
			return 0;

	}
	return 1;
}

int	main(void)
{
char yazi[] = "kabak";
int a;

a = 48 + palindrom(yazi); // &yazi[0]

write(1, &a, 1);

}
