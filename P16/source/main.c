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
	printf("請輸入字串，按ENTER結束輸入:\n");
	while ((ch = getche()) != ENTER && i<MAX)
	{
		str[i++]=ch;
	}
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n檔案附加完成!!\n");
	system("pause");
	return 0;
	
}