#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i <= num - 1; i++)
    {
        for (int j = num - i; j >= 1; j--)
	{
            printf("%d", j);
            if ( j != 1)
	    {
                printf(" ");
            }
        }
        if (i != num - 1)
        {
            printf("\n");
	}
    }
    return 0;
}
