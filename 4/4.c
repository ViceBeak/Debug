#include <stdio.h>

int main()
{
    int m;
    int numbers[10];
    int i, j;
    for (i = 0; i < 10; i++)
    {
    	scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 9; i++)
    {
	for(j = 0; j < 9 - i; j++)
	{
	    if (numbers[j] < numbers[j + 1])
	    {
		m = numbers[j];
		numbers[j] = numbers[j + 1];
		numbers[j + 1] = m;
	    }
	}
    }
    for (i = 0; i < 10; i++)
    {
	printf("%d", numbers[i]);
	if (i < 9)
	{
	    printf(" ");
	}
    }
    return 0;
}
