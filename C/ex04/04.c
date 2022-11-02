/* sayinin pozitif veya negatif oldugunu gosteren program.. */

#include <unistd.h>
void	ft_is_negative(int n)
{
	if (n >= 0)
		write (1, &"P", 1);
	else
		write (1, &"N", 1);
}
int	main()
{
	ft_is_negative(-1);
}

/* 1. n tanimla.
2. n eger 0 dan buyukse pozitif yazdir
3. n eger 0 dan kucukse negatif yazdir.
4.bitir. */