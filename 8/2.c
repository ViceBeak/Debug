#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    char names[n][101], max[101];
    for (int i = 0; i < n; i++)
    {
         gets(names[i]);
    }
    strcpy(max, names[0]);
    for (int i = 0; i < n-1; i++)
    {
        if (strlen(max) < strlen(names[i]))
	{
            strcpy(max, names[i]);
        }
    }
    printf("%s", max);
    return 0;
}
