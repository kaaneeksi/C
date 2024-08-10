#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Eksik arguman sayisi");
		exit(1);
	}
	else
	{
		printf("\n-----------------------------\n");
		printf("program adi: %s\n",argv[0]);
		printf("1. arguman : %s\n",argv[1]);
		printf("2. arguman : %s\n",argv[2]);
	}
}
