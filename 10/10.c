#include <stdio.h>

int main()
{
    int i, j, N;
    scanf("%d", &N);
    printf("2");
    for (i = 3; i <= N; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
        	break;
	    }
        }
        if (i == j)
        {
            printf("\n%d", i);
	}
    }
    return 0;
}
