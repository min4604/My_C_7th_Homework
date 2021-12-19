#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double r[] = { 0.1,0.105,0.11,0.115,0.12 };
double p = 5000;
int year = 15;
double ans;
int i, j;
int main(void)
{
	for (i = 0; i < 5; i++)
	{
		printf("rate is%.1f%s\n", r[i] * 100,"%");
		printf("year\tAmount on deposit\n");
		for (j = 1; j <= year; j++)
		{
			ans = p * pow(1.0 + r[i], j);
			printf("%4d%21.2f\n", j, ans);
		}
	}

	system("pause");
	return 0;
}