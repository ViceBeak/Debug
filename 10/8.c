#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 2;i <= n; i++)
    {
	for (j = 2; j < i; j++)
	{
	    if (i % j == 0)
	    {
		break;
	    }
	}
	if (j == i)
	{
	    if (i == 2)
	    {
		printf("%d", i);
	    }
	    else
	    {
		printf("\n%d", i);
	    }	
	}
    }	
return 0;
}