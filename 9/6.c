#include <stdio.h>

int main()
{
    int i, N;
    int part[50];
    part[0] = 0;
    part[1] = 1;
    part[2] = 1;
    scanf("%d", &N);
    if (N <= 2)
    {
	printf("%d", part[N]);
	return 0;
    }
    for (i = 3; i < N; i++)
    {
        part[i] = part[i - 2] + part[i - 3];
    }
    printf("%d", part[N-1]);
    return 0;
}
