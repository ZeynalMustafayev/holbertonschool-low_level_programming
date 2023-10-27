#include <string.h>
/**
 * leet - changes all lowercase letters of a string to uppercase.
 * @a: string.
 * Return: all upper.
 */
char *leet(char *a)
{
	int uz = strlen(a);
	int i = 0, j;
	char low_arr[6] = "aeotl", big_arr[6] = "AEOTL", num_arr[6] = "43071";

	while (i < uz)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(a + i) == low_arr[j] || *(a + i) == big_arr[j])
			{
				*(a + i) = num_arr[j];
			}
		}
		i++;
	}
	return (a);
}
