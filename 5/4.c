#include <stdio.h>
#include <string.h>

int main()
{
    char names[10][21], name[21], temp[21];
    int i, j;
    for (i = 0; i < 10; i++)
    {
        memset(name, 0, 21);
        memset(names[i], 0, 21);
        scanf("%s", name);
        for (j = 0; j < strlen(name); j++)
	{
            names[i][j] = name[j];
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
	{
            if (strcmp(names[j], names[j + 1]) >= 0)
	    {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
    	if (i == 9)
    	{
    	    printf("%s", names[i]);
	}
    	else
    	{
    	    printf("%s\n", names[i]);
	}
    }
    return 0;
}
