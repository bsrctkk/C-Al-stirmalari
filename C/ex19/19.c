/* yazilan ustlu sayinin cevabini bulan program.... 1. Yazilan sayi, 2. ust sayisi orn(2,5) */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}

int	main(void)
{
	printf("%i", ft_iterative_power(3, 4 ));
}