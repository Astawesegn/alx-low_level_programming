#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **daa;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	daa = malloc(sizeof(int *) * height);

	if (daa == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		daa[m] = malloc(sizeof(int) * width);

		if (daa[m] == NULL)
		{
			for (; m >= 0; m--)
				free(daa[m]);
			free(daa);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			daa[m][n] = 0;
	}
	return (daa);
}
