/* iki sayının karelerinin toplamını görüntüleyen fonksiyon yazın */

#include <stdio.h>

int ft_power_plus(int a, int b)
{
	int c;

	c = (a * a) + (b * b);

	return(c);
}

int main ()
{
	printf("%d", ft_power_plus(2, 3));
}

/*
1- başla
2- a yaz
3- b yaz
4- c yaz
5- a yı kendi ile çarp
6- b yi kendi ile çarp
7- a ile b yi topla
8- sonuc c
9- c yaz / döndür
*/
