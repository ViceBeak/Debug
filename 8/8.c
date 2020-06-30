#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    char name[100][102];
    int i, j;
    char largest[102];
    for (i = 0; i < n; i++)
    {
    	for (j = 0; scanf("%c", &name[i][j]) != EOF && name[i][j] != '\n'; j++);
    }        
    strcpy(largest, name[0]);
    for ( i = 1; i < n; i++)
    {
    	if (strlen(largest) < strlen(name[i]))
    	{
    	    strcpy(largest, name[i]);
	}
    }
    for (i=0; i<strlen(largest) - 1; i++)
    {
	printf("%c", largest[i]);	
    }
    return 0;
}
