#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE*fptr1,*fptr2;
	char ch;
	int count = 0;
	fopen_s(&fptr1, "C:/c_code/homework/P15/welcome.txt", "r");
	fopen_s(&fptr2, "C:/c_code/homework/P15/output.txt", "w");
	if ((fptr1 != NULL)&& (fptr2 != NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
		{
			putc(ch,fptr2);
			count++;
		}
		fclose(fptr1);
		fclose(fptr2);
	}
	else
	{
		printf("ÀÉ®×¶}±Ò¥¢±Ñ\n");
	}
	system("pause");
	return 0;
}