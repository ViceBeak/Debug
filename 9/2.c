#include <stdio.h>

int main()
{
    int i, N;
    scanf("%d", &N);
    int step[50];
    step[0] = 0;
    step[1] = 1;
    step[2] = 1;
    for (i = 3; i < N; i++)
    {
        step[i] = step[i - 2] + step[i - 3];
    }
    printf("%d", step[N-1]);
    return 0;
}
