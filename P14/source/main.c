#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE*fptr;
	char ch;
	int count = 0;
	fopen_s(&fptr, "C:/c_code/homework/P14/welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else
	{
		printf("�ɮ׶}�ҥ���\n");
	}
	system("pause");
	return 0;
}