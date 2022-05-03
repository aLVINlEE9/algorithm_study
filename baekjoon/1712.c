#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(void)
{
	char input_num[100];
	int	input[3];
	int	i;
	int j;
	int cnt;
	int A, B, C;

	i = 0;
	cnt = 0;
	j = 1;
	scanf("%[^\n]s", input_num);
	input[0] = atoi(input_num);
	while (input_num[i])
	{
		if (input_num[i] == ' ')
		{
			input[j] = atoi(&input_num[i]);
			j++;
		}
		i++;
	}
	j = 0;
	cnt = 1;
	i = (input[0] + (input[1] * cnt) / cnt);
	if (i < input[0] + (input[1] * cnt + 1) / cnt + 1)
		return (printf("%d\n", -1));
	cnt++;
	while (1)
	{
		j = (input[0] + (input[1] * cnt) / cnt);
		if (i > j)
		{
			
			i = j;
			cnt++;
		}
		else
		{
			printf("%d\n", cnt);
			break ;
		}
	}
}