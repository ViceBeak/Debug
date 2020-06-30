#include <stdio.h>

int main()
{
    int m, n, k = 0, l = 0, num = 0, matrix[100][100];
    scanf("%d %d", &m, &n);
    int sum = m * n;
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
	{
            scanf("%d", &matrix[i][j]);
        }
    }
    while (k < m && l < n) 
    {
        for (int i = l; i < n; i++) 
	{
            printf("%d", matrix[k][i]);
            if (++num < sum) 
	    {
                printf(" ");
            }
        }
        k++;
        for (int i = k; i < m; i++) 
	{
            printf("%d", matrix[i][n - 1]);
            if (++num < sum) 
	    {
                printf(" ");
            }
        }
        n--;
        if (k < m) 
	{
            for (int i = n - 1; i >= l; i--) 
	    {
                printf("%d", matrix[m - 1][i]);
                if (++num < sum) 
		{
                    printf(" ");
                }
            }
            m--;
        }
        if (l < n) 
	{
            for (int i = m - 1; i >= k; i--) 
	    {
                printf("%d", matrix[i][l]);
                if (++num < sum) 
		{
                    printf(" ");
                }
            }
            l++;
        }
    }
    return 0;
}
