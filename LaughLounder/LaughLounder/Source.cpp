#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int strlenAndcheck(char* name)
{
	int i = 0;
	while (name[i] != NULL)
	{
		if (name[i] != '5')
		{
			return 0;
		}
		i++;
	}
	return i;
}
int main()
{
	char noon[99999], jane[99999], bow[99999];
	int lenNoon, lenJane, lenBow;
	scanf("%s %s %s", &noon, &jane, &bow);
	lenNoon = strlenAndcheck(noon);
	lenJane = strlenAndcheck(jane);
	lenBow = strlenAndcheck(bow);
	if (lenNoon == 0 || lenJane == 0 || lenBow == 0 || lenNoon > 10 || lenJane > 10 || lenBow > 10)
	{
		printf("ERROR");
		return 0;
	}
	if (lenNoon > lenJane && lenNoon > lenBow)	printf("Noon is crazy");
	else if (lenJane > lenNoon && lenJane > lenBow)	printf("Jane is crazy");
	else if (lenBow > lenJane && lenBow > lenNoon)	printf("Bow is crazy");
	else if (lenNoon == lenJane && lenNoon > lenBow)	printf("Noon and Jane are crazy");
	else if (lenNoon == lenBow && lenNoon > lenJane)	printf("Noon and Bow are crazy");
	else if (lenBow == lenJane && lenBow > lenNoon)	printf("Jane and Bow are crazy");
	else if (lenBow == lenJane && lenBow == lenNoon && lenNoon == lenJane)	printf("They are crazy");
	return 0;
}