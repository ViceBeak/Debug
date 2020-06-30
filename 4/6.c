#include <stdio.h>

int main()
{
    int n, i, j, tmpt;
    n = 10;
    int numbers[10];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n-1; i++)
    {
        for (j = i + 1; j < n; j++)
	{
            if (numbers[i] < numbers[j])
	    {
                tmpt = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = tmpt;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (i != 9)
	{
            printf("%d ", numbers[i]);
        }
	else
	{
            printf("%d", numbers[i]);
        }        
    }
    return 0;
}
