#include <stdio.h>

int main()
{
	
    int n, i, j;
    scanf("%d", &n);
    if (n == 2)
    {
    	printf("2");
    }
    else
    {
    	printf("2");
        for (i = 3; i <= n; i = i + 1)
        {
            for (j = 2; j < i; j = j + 1)
            {
		if (i % j == 0)
            	{
		    break;
        	}
        	else
            	{
                    if (j == i - 1)
                    {
                	printf("\n%d", i);
		    }
		    else
		    {
			continue;
            	    }
            	}
            }
    	}
    }
    return 0;
}
