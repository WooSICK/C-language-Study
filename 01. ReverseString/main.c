#include <stdio.h>
#include <stdlib.h>

char* ReversData(int num)
{
	char* name = (char*)malloc(sizeof(char) * num);
	if (name == NULL)
	{
		printf("error");
		return NULL;
	}
	printf("What's your name \n");
	scanf_s("%s",name, sizeof(char) * num);
	return name;
}

int main(void)
{
	int c;
	char* name;
	
	scanf_s("%d", &c);
	char* name2 = (char*)malloc(sizeof(char) * c);
	name = ReversData(c);
	printf("name: %s \n", name);
	int num = 0;
	for (int i = 0; i < (c - 1);i++)
	{
		if (name[i] != '\0')
			num++;
		else
			i = 100;
	}

	for (int i = 0; i < num;i++)
	{
			name2[i] = name[num-1 - i];
	}
	name2[num] = '\0';
	
	printf("%s", name2);

	free(name);
	free(name2);

	return 0;
}