#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 1000001

int main()
{
	char result[BUFFER_SIZE];
	char ch;
	int i = 0;
	int j = 0;
	int len = 0;
	int cnt = 0;
	int done = 0;

	scanf("%[^\n]s", result);
	len = strlen(result);
	i = 0;
	while (i < len && result[i] == ' ')
	{
		if (result[i + 1] == '\0')
			done = 1;
		i++;
	}
	while (done != 1 && i < len)
	{
		if (result[i] != ' ')
		{
			j = i;
			while (j < len && result[j] != ' ')
				j++;
			cnt++;
		}
		i = j;
		i++;
	}
	printf("%d\n", cnt);
	return (0);
}