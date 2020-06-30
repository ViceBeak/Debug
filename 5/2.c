#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int j, k, l;
    char name[10][21];
    for (j = 0; j < 10; j++)
    {
        scanf("%s", name[j]);
    }
    for (j = 0; j < 9; j++)
    {
        for (k = 0; k < 9 - j; k++)
	{
            if (strcmp(name[k], name[k + 1]) >= 0)
	    {
                for (l = 0; l < 20; l++)
		{
                    swap(&name[k][l], &name[k + 1][l]);
                }
            }
        }
    }
    for (j = 0; j < 10; j++)
    {
    	if (j == 9)
    	{
    	    printf("%s",name[j]);
	}
    	else
    	{
    	    printf("%s\n",name[j]);
	}
    }
    return 0;
}
