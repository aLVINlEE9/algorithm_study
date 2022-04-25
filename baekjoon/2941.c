#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 101

int check_croa(char *input, int *i)
{
	if (strncmp(input, "c=", 2) == 0 || strncmp(input, "c-", 2) == 0 || strncmp(input, "d-", 2) == 0 ||\
		strncmp(input, "lj", 2) == 0 || strncmp(input, "nj", 2) == 0 || strncmp(input, "s=", 2) == 0 ||\
		strncmp(input, "z=", 2) == 0)
	{
		*i += 1;
		return (1);
	}
	else if (strncmp(input, "dz=", 3) == 0)
	{
		*i += 2;
		return (1);
	}
	else
		return (0);
}

int main(void)
{
	char input[BUFFER_SIZE];
	int cnt = 0;
	int i = 0;

	scanf("%[^\n]s", input);
	i = 0;
	while (input[i])
	{
		if (check_croa(&input[i], &i))
			cnt++;
		else
			cnt++;
		i++;
	}
	printf("%d\n", cnt);
}