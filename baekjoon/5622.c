#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 16

int	time_cost(char c)
{
	int a = 0;

	if (c >= 'A' && c <= 'C')
		a = 3;
	else if (c >= 'D' && c <= 'F')
		a = 4;
	else if (c >= 'G' && c <= 'I')
		a = 5;
	else if (c >= 'J' && c <= 'L')
		a = 6;
	else if (c >= 'M' && c <= 'O')
		a = 7;
	else if (c >= 'P' && c <= 'S')
		a = 8;
	else if (c >= 'T' && c <= 'V')
		a = 9;
	else if (c >= 'W' && c <= 'Z')
		a = 10;
	return (a);
}

int main(void)
{
	char input[BUFFER_SIZE];
	int time = 0;
	int i = -1;

	scanf("%[^\n]s", input);
	while (input[++i])
		time += time_cost(input[i]);
	printf("%d\n", time);
}