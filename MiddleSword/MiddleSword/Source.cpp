#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printMiddle(int* len)
{
	int temp;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (len[i] < len[j])
			{
				temp = len[i];
				len[i] = len[j];
				len[j] = temp;
			}
		}
	}
	printf("%d", len[1]);

}
int main()
{
	int len[3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &len[i]);
	}
	printMiddle(len);
	return 0;
}