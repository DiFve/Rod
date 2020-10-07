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
	char word[99999];
	scanf("%[^\n]", &word);
	int len = strlen(word), rod;
	scanf("%d", &rod);
	rod %= 26;
	for (int i = 0; i < len; i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
		{
			for (int j = 0; j < rod; j++)
			{
				word[i]++;
				if (word[i] > 'z')	word[i] = 'a';

			}

		}
		else if (word[i] >= 'A' && word[i] <= 'Z')
		{
			for (int j = 0; j < rod; j++)
			{
				word[i]++;
				if (word[i] > 'Z')	word[i] = 'A';
			}
		}
	}
	printf("%s", word);
	return 0;
}