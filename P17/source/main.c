#include<stdio.h>
#include<stdlib.h>

int i, j;

int main(void)
{
	printf("(A)");
	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (i = 10; i > 0; i--)
	{
		for (j = i;  j> 0; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%s", " ");
		}
		for (j = 0; j < (10-i); j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(D)");
	for (i = 11; i > 0; i--)
	{
		for (j = i; j > 0; j--)
		{
			printf("%s", " ");
		}
		for (j =(11-i); j > 0; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}