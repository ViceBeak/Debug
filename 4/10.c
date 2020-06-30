#include <stdio.h>

int main()
{
    int m, j, k, o, n;
    n = 10;
    int numbers[n];
    for (j = 0; j < n; j++)
    {
        scanf("%d", &numbers[j]);
    }
    for (j = 0; j < n-1; j++)
    {
    	m = j;
        for (k = j; k < n-1; k++)
	{
            if (numbers[m] < numbers[k + 1])
	    {
                m = k + 1;
            }
        }
        o = numbers[j];
        numbers[j] = numbers[m];
        numbers[m] = o;
    }
    for (j = 0; j < n; j++)
    {
        if (j == 9)
	{
            printf("%d", numbers[j]);
        }
	else
	{
            printf("%d ", numbers[j]);
        }
    }
    return 0;
}
