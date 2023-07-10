#include "main.h"
#include <stdlib.h>

/**
* **alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: The width of the 2-dimensional array
* @height: The height of the 2-dimensional array
* Return: If width <= 0, height <= 0, or the function fails - NULL,
* otherwise a pointer to the 2-dimensional array of integers.
*/
int **alloc_grid(int width, int height)
{
	int **matrix;
	int hgt;
	int wid;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	for (hgt = 0; hgt < height; hgt++)
	{
		matrix[hgt] = malloc(sizeof(int) * width);

		if (matrix[hgt] == NULL)
		{
			for (; hgt >= 0; hgt--)
				free(matrix[hgt]);

			free(matrix);
			return (NULL);
		}
	}
	for (hgt = 0; hgt < height; hgt++)
	{
		for (wid = 0; wid < width; wid++)
			matrix[hgt][wid] = 0;
	}

	return (matrix);
}
