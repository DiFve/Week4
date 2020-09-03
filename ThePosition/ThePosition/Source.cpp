#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int strlen(char* word)
{
	int i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char word[99999], check;
	scanf("%[^\n]\n", word);
	scanf("%c", &check);
	printf("The position of %c is here: ", check);
	for (int i = 0; i < strlen(word); i++)
	{
		if (check >= 'A' && check <= 'Z')
		{
			if (word[i] == check || word[i] == check + 32)
			{
				printf("%d ", i + 1);
			}
		}
		else if (check >= 'a' && check <= 'z')
		{
			if (word[i] == check || word[i] == check - 32)
			{
				printf("%d ", i + 1);
			}
		}
	}
	return 0;
}