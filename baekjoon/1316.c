#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
	int input_num;
	char **input;
	char **input_ch;
	int word = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int cnt = 0;
	int len = 0;
	int flag = 0;

	scanf("%d", &input_num);
	input = (char **)malloc(sizeof(char *) * (input_num + 1));
	input_ch = (char **)malloc(sizeof(char *) * (input_num + 1));
	while (i < input_num)
	{
		input[i] = (char *)malloc(sizeof(char) * 101);
		input_ch[i] = (char *)malloc(sizeof(char) * 101);
		i++;
	}
	i = 0;
	while (scanf("%s", input[i]) != EOF)
	{
		if (i >= input_num)
			break ;
		i++;
	}
	i = 0;
	while (i < input_num)
	{
		flag = 0;
		j = 0;
		len = strlen(input[i]);
		cnt = 0;
		while (j < len)
		{
			if (input[i][j] != input[i][j + 1])
			{
				input_ch[i][cnt] = input[i][j];
				cnt++;
			}
			j++;
		}
		input_ch[i][cnt] = '\0';
		j = 0;
		len = strlen(input_ch[i]);
		while (j < len)
		{
			k = j + 1;
			while (k < len)
			{
				if (k - j >= 2 && input_ch[i][j] == input_ch[i][k])
				{
					flag = 1;
					break ;
				}
				k++;
			}
			j++;
			if (flag == 1)
				break ;
			if (flag == 0 && j == len)
				word++;
		}
		i++;
	}
	printf("%d\n", word);
}