#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d-%d-%d", &a, &b, &c);
    if ((b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) && (c <= 31))
    {
        printf("YES");
    }
    else if((b == 4 || b == 6 || b == 9 || b == 11) && (c <= 30))
    {
    	printf("YES");
    }
    else if( b == 2)
    {
    	if((a % 100 != 0 && a % 4 == 0 || a % 400 == 0) && (c <= 29))
    	{
    	    printf("YES");
	}
	else if((a % 100 != 0 && a % 4 != 0 || a % 100 == 0 && a % 400 != 0) && (c <= 28))
	{
	    printf("YES");
	}
	else
	{
	    printf("NO");
	}
    }
    else
    {
	printf("NO");
    }
    return 0;
}
