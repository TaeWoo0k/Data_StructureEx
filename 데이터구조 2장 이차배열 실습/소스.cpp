#include<stdio.h>
int main()
{ 
	
	int a[5][3], sum[5][5];
	int i, j;

	for (i = 1; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j == 0)
			{
				printf("�л�%d�� ���� ����",i);
				scanf_s("%d", &a[i][j]);
				sum[i][i] = a[i][j];
			}
			else if (j == 1)
			{
				printf("�л�%d�� ���� ����", i);
				scanf_s("%d", &a[i][j]);
				sum[i][i] = sum[i][i] + a[i][j];
			}
			else if (j == 2)
			{
				printf("�л�%d�� ���� ����", i);
				scanf_s("%d", &a[i][j]);
				sum[i][i] = sum[i][i] + a[i][j];
			}
		}
		
	}
	
	for (i = 1; i < 5; i++)
	{	
		
		printf("\n");
		printf("�л�%d�� ���� ���� %d  \n", i, a[i][0]);
		printf("�л�%d�� ���� ���� %d  \n", i, a[i][1]);
		printf("�л�%d�� ���� ���� %d  \n", i, a[i][2]);
		printf("�л�%d�� ���� %d  \n", i, sum[i][i]);
		printf("�л�%d�� ��� %d  \n", i, sum[i][i] / 3);

	}
	
}