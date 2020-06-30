#include <stdio.h>

int main()
{
    int m, n, matrix_a[10][10], matrix_b[10][10], matrix_result[10][10]={0};
    scanf("%d %d", &m, &n);
    int mIndex, nIndex, j;
    for (mIndex = 0; mIndex < m; mIndex++)
    {
        for (nIndex = 0; nIndex < n; nIndex++)
	{
            scanf("%d", &matrix_a[mIndex][nIndex]);
        }
    }
    for (mIndex = 0; mIndex < n; mIndex++)
    {
        for( nIndex = 0; nIndex < m; nIndex++)
	{
            scanf("%d", &matrix_b[mIndex][nIndex]);
        }
    }
    for (mIndex = 0; mIndex < m; mIndex++) 
    {
        for (nIndex = 0; nIndex < m; nIndex++)
	{
            for (j = 0; j < n ; j++)
    	    {
                matrix_result[mIndex][nIndex] += matrix_a[mIndex][j] * matrix_b[j][nIndex];
            }
        }
    }
    for (mIndex = 0; mIndex < m; mIndex++)
    {
    	for (nIndex = 0; nIndex < m; nIndex++)
	{
            printf("%d", matrix_result[mIndex][nIndex]);
            if (nIndex == m - 1 && mIndex != m - 1)
  	    {
                printf("\n");
            }
	    else if (nIndex != m-1)
            {
                printf(" ");
            }
            else
            {
            	break;
 	    }
        }
    }
    return 0;
}
