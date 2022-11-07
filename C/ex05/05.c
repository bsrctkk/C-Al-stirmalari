/* 123 ile baslayan 789 ile biten, yuzler basamagi onlar basamagindan kucuk, onlar basamagi birler basamagindan kucuk olacak sekilde 
uc basamakli sayilarin kombinasyonunu yazan program... */ 

#include <unistd.h>
void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '1';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				if (a != '7')
					write (1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main()
{
	ft_print_comb();
	return(0);
}
/* 1. A tanimla (yuzler basamagi)
2.B tanimla (onlar basamagi)
3.C tanimla (birler basamagi)
4. A 0 degerini ver. 
5. 7 ye esitlene kadar dongu olustur.
6. ic ice bri dongu yap 
7. B ye a+1 degerini ver.
8. 8 e esitlenene kadar dongu olustur.
9. ic ice bir dongu daha yap.
10. C ye b+1 degerini ver .
11. 9 a esitlenene kadar dongu olustur
12. Donguleri kontrol ettikten sonra yazdir ve bir arttir.
13. Bitis. */
