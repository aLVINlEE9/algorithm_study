#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *int_array;
	int len;
	int i = 0;
	int j = 0;
	int temp = 0;

	scanf("%d", &len);
	int_array = (int *)malloc(sizeof(int) * len);
	if (int_array == NULL)
		return (1);
	while (scanf("%d", &int_array[i++]) != EOF)
		;
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len - 1)
		{
			if (int_array[j] > int_array[j + 1])
			{
				temp = int_array[j];
				int_array[j] = int_array[j + 1];
				int_array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < len)
	{
		printf("%d\n", int_array[i++]);
	}
	free(int_array);
}