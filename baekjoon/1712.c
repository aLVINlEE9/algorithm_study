#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *input_num;
	int	input[3];
	int	i;
	int j;
	int cnt;
	int A, B, C;

	i = 0;
	cnt = 0;
	j = 0;
	scanf("%[^\n]s", input_num);
	// input[cnt] = atoi(&input_num[0]);
	while (input_num[i])
	{
		j = i;
		while (input_num[j + 1] != ' ' && input_num[j + 1] != '\0')
		{
			j++;
		}
		input[cnt] = atoi(&input_num[i]);
		if (input_num[j] != '\0')
			break ;
		cnt++;
		i = j + 1;
	}
	printf("%d %d %d\n", input[0], input[1], input[2]);
}