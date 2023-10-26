#include <stdio.h>
#include <string.h>
/**
 * reverse_array - Something useful
 * @n: Something more useful
 *
 * @a: Something more useful
 * Return: Something much more useful
 */
void reverse_array(int *a, int n)
{
	int temp, i, j, half_n;

	if (n % 2 == 0)
	{
		half_n = n / 2;
	}
	else
	{
		half_n = (n + 1) / 2;
	}
	i = n - 1;
	j = 0;

	while (half_n <= i)
	{
		temp = *(a + j);
		 *(a + j) =  *(a + i);
		 *(a + i) = temp;
		j++;
		i--;
	}
}
