#include <unistd.h>

void	write_text(char c)
{
	write(1, &c, 1);
}

char	reverce_text(char *text)
{
	int	size;
	char	*ptr;

	ptr = text;   //ptr = &text[0]
	size = 0;

	// Dizi Boyutu Hesaplama
	while (text[size] != '\0')
	{
		size++;
	}

	while (size >= 0)
	{
		write_text(*(ptr + size));
		size--;
	}
}

int	main(void)
{
 char	isim [] = "hey gidi eski gunler";

 reverce_text(isim);
}
