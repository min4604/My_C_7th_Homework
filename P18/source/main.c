#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE*in,*out;
	char str[100];
	int cnt;
	fopen_s(&in, "C:/c_code/homework/welcome.txt", "r");
	fopen_s(&out, "C:/c_code/homework/output.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf_s(in, "%s", str, sizeof(str));
		if (cnt > 0)
		{
			fprintf(out, "%s\n", str);
		}
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}