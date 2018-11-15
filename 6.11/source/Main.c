#include <stdlib.h>
#include <stdio.h>

int main()
{
	int  a, b, x, y=0, i, j;
	int c[5] = { 25,44,11,32,17 };
	
	for (i = 0; i < 4; i++)
	{
		b = 0;
		for (j = 0; j < 4 - i; j++)
		{
			if (c[j] > c[j + 1])
			{
				x = c[j];
				c[j] = c[j + 1];
				c[j + 1] = x;
			}
			else
				b++;
		}
		if (b == 4 - i)
			break;
		printf("%d:", i+1);
		for (j = 0; j < 5; j++)
		{
			printf("%d ", c[j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}