/*  *A nin ile *b degerlerinin yer degistirmesini saglayan program.. */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main()
{
	int	x;
	int	y;
	
	x = 2;
	y = 3;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
}

/* 1. C yi tanimla.
2. C nin degerini *a ya esitle.
3. *a nin degerini *b ye esitle.
4. *b nin degerini c ye esitle.
5. X tanimla.
6.Y tanimla.
7.x e 2 degerini ver 
8.y ye 3 degerini ver.
9. *a yi x in adresi olarak goster
10. *b yi y nin adresi olarka goster.
11. x i yazdir.
12. y yi yazdir. */