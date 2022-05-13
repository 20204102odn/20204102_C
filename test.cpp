#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int m,n,sum;
	sum = 0;
	scanf("%d %d", &m, &n);

	for (m =  m ; m <= n; m++)
	{
		if (m % 7 == 0)
		{
			sum +=m;
		}
	}

	printf("%d", sum);
} 