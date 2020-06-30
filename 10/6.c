#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &c);
    for (b = 2; b <= c; b++)
    {
    	for (a = 2; a < b; a++)
	{
    	    if (b % a == 0)
	    {
		break;
	    }
    	}
        if (a == b)
	{
	    if (b == 2)
	    {
		printf("%d", b);
	    }
	    else
	    {
		printf("\n%d", b);
	    }
	}
    }
    return 0;
}
