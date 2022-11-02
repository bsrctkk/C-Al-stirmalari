/* Alfabeyi yazdiran programi yaziniz. A dan Z ye kadar.. */

#include <unistd.h>

void	ft_print_alphabet (void)
{
	char	 c;

	c = 'a';
	while (c <= 'z')
	{
		write (1, &c, 1);
		 c++;
	}
}
int	main()
{
	ft_print_alphabet();
	return (0);
}

/* 1. C tanimla.
2. C ye a degeri ver (Asci tablo)
3. Dongu olustur
4. C Z nin degerinden kucukse yazdir ve 1 arttir
5. Donguyu Z ile esitlenince bitir. */
