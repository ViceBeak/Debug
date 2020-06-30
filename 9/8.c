#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int part[50];
    part[0] = 0;
    part[1] = 1;
    part[2] = 1;
    for (i = 3; i < n; i++)
    {
        part[i] = part[i - 2] + part[i - 3];
    }
    printf("%d", part[n-1]);
    return 0;
}
