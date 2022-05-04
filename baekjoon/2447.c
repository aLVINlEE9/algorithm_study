#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void	print_circle(int num, int ori)
{
	int i = -1;
	if (num == 1)
	{
		return ;
	}
	while (++i < num)
	{
		printf("*");
	}
	printf("\n");
	return (print_circle(num / 3, ori));
}

int main(void)
{
	int num;
	int i = -1;
	int wh;

	scanf("%d", &num);
	print_circle(num, num);
	exit(0);
}

// *****0*****