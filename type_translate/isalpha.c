 #include <stdio.h>
 #include <ctype.h>

 int	main(void)
 {
	int	result;

	result = isalpha('a');	// 2
	printf("%d\n",result);	// 0
	result = isalpha('8');	// 0
	printf("%d\n",result);
	result = isalpha(5);
	printf("%d\n",result);
 }
