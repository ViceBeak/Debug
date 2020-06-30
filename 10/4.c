#include <stdio.h>

int main()
{
    int num, digit, a;
    scanf("%d", &num);
    for (digit = 2; digit <= num; digit++)
    {
	for (a = 2; a < digit; a++)
	{
            if (digit % a == 0)
	    {
                break;
            }
        }
        if(a == digit)
	{
            if (digit == 2)
            {
           	printf("%d", digit);
	    }
            else
            {
        	printf("\n%d", digit);
	    }
    	}
    }
    return 0;
}
