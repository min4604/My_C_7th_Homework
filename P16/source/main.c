#include<stdio.h>
#include<stdlib.h>
#define ENTER 13
#define MAX 80

int main(void)
{
	FILE*fptr;
	char str[MAX],ch;
	int i = 0;
	fopen_s(&fptr, "C:/c_code/homework/output.txt", "a");
	printf("�п�J�r��A��ENTER������J:\n");
	while ((ch = getche()) != ENTER && i<MAX)
	{
		str[i++]=ch;
	}
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n�ɮת��[����!!\n");
	system("pause");
	return 0;
	
}