#include <stdio.h>

int	recursive_sum(int number)
{
	if (number < 0)
		return (0);
	return(number + recursive_sum(number -1));
}

int	main (void)
{
	printf("%d\n", recursive_sum(3));
}
