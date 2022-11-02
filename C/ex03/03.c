/* 1 den 10 kadar sayilari yazan program... */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		write (1, &x, 1);
		x++;
	}
}

int	main()
{
	ft_print_numbers();
}

/* 1. x tanimla
2. x e 0 degerini ver.
3. dongu olustur
4. x degeri 9 a esit olana kadar yazdir ve 1 arttir.
5. x  9 dan buyuk olunca donguden cik 
6.bitir */