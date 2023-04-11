#include <stdlib.h>

/**
  * alloc_grid - returns a 2 dimensional int array
  * @width: parameter 1
  * @height: parameter 2
  * Return: array (success), NULL (error)
  */

int **alloc_grid(int width, int height)
{
	int **gridArr;
	int w, h;

	/* checking if height / width is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);
	gridArr = malloc(sizeof(int *) * height);
	if (gridArr == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		gridArr[w] = malloc(sizeof(int) * width);
		if (gridArr[w] == NULL)
		{
			free(gridArr);
			for (h = 0; h <= w; h++)
				free(gridArr[h]);
			return (NULL);
		}
	}

	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
			gridArr[w][h] = 0;
	}

	return (gridArr);
}
