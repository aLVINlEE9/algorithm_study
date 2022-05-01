#include <stdio.h>
#include <stdlib.h>

int	fibo(int until)
{
	if (until == 0)
		return (0);
	if (until == 1)
		return (1);
	return (fibo(until - 1) + fibo(until - 2));
}

int main(void)
{
	int fibo_num;

	scanf("%d", &fibo_num);
	printf("%d\n", fibo(fibo_num));
}