#include <stdio.h>
#include <string.h>

int main()
{
    char names[10][21], temp[21];
    for (int i = 0; i < 10; i++)
    {
        scanf("%s", names[i]);
    }
    for (int i = 0; i < 10 - 1; i++)
    {
    	for (int j = 0; j < 10 - i - 1; j++)
	 {
            if (strcmp(names[j], names[j + 1]) > 0)
   	    {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
    	if (i != 9)
    	{
    	    printf("%s\n", names[i]);
	}
        else
        {
            printf("%s", names[i]);
	}
    }
    return 0;
}
