#include <stdio.h>
#include <stdlib.h>

int	main (void)
{
	int n, i, temp;
	int* ptr;

	i = 0;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	temp = n;
	ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL)
	{
		printf("Memory not allocated.\n");
		return (1);
	}
	else
		printf("Memory successfully allocated\n");

	printf("Enter %d numbers:\n",n);
	while (n > 0)
	{
	scanf("%d",&ptr[i]);
	i++;
	n--;
	}
	i = 0;
	n = temp;
	printf("The elements of the array:\n");
	while (i < n)
	{
		printf("%d ",ptr[i]);
		i++;

	}
	printf("\n");

	free(ptr);

}
