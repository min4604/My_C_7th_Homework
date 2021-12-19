#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int i, j, k;

int main(void)
{
	printf("side1 side2 hypotenuse\n");
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= 500; j++)
		{
			for (k = 1; k <= 500; k++)
			{
				if (pow(i, 2) == (pow(j, 2) + pow(k, 2)))
				{
					printf("%5d %5d %10d\n", j, k, i);
				}
			}
		}
	}
	system("pause");
	return 0;
}