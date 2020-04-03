#include <stdio.h>
#include <stdlib.h>

// 1- wszy sposob:
/*
int temp[3]; // indeksy: [0] [1] [2] czyli [22] [24] [26]
int i = 3;


int main()
{
	temp[0] = 22;
	temp[1] = 24;
	temp[2] = 26;
	
	while (i--)
	{
		printf("%d\n", temp[i]);
	}

	return 0;
}
*/

// 2-gi sposob:

/*
int temp[] = { 22,24,26 };
int i = 3;


int main()
{


	while (i--)
	{
		printf("%d\n", temp[i]);
	}

	return 0;
*/

// Trzeci sposob string:

char imie[] = "Sebastian";

	int main()
{
		printf("%s\n", imie);
		printf("lol");
}
