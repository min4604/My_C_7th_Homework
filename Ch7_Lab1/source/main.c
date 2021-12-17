#include<stdio.h>
#include<stdlib.h>

typedef struct _student
{
	char name[6];
	int chinese;
	int english;
	int math;
	int sum;
	float avg;
}student;

int main(void)
{
	student data[5];
	FILE *stream1;
	FILE *stream2;
	
	fopen_s(&stream1,"C://c_code//Ch7_Lab1//gradedata.txt", "r");
	fopen_s(&stream2,"C://c_code//Ch7_Lab1//gradeoutput.txt", "w+");
	
	if (stream1==NULL || stream2==NULL)
	{
		printf("檔案開啟失敗\n");
	}
	else
	{
		
		fprintf(stream2, "姓名\t國文\t英文\t數學\t綜合\t平均\n");
		for (int i = 0; i < 5; i++)
		{
			fscanf_s(stream1, "%s", data[i].name,6);
			
			if (i == 2)
			{
				fscanf_s(stream1, "%d", &data[i].chinese);
				printf("rt1\n");
			}
			else
			{
				fscanf_s(stream1, "%d", &data[i].chinese);
				printf("rt\n");
			}
			fscanf_s(stream1, "%d", &data[i].english);
			fscanf_s(stream1, "%d", &data[i].math);

			data[i].sum = data[i].chinese + data[i].english + data[i].math;
			data[i].avg = data[i].sum / 3.0;
			fprintf(stream2, "%s\t%d\t%d\t%d\t%d\t%.2f\n", data[i].name, data[i].chinese, data[i].english, data[i].math, data[i].sum, data[i].avg);
			printf("%s\t%d\t%d\t%d\t%d\t%.2f\n", data[i].name, data[i].chinese, data[i].english, data[i].math, data[i].sum, data[i].avg);
		}
		fclose(stream1);
		fclose(stream2);
	}
	
	system("pause");
	return 0;
}