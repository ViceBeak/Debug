#include <stdio.h>
#include <string.h>

int main()
{
    char before[100]={0};
    scanf("%s", before);
    char calculate[100][100];
    int i, w = 0, r = 0, x = 0, count = 0, result = 0;
    while(scanf("%s", calculate[i]) != EOF)
    {
        count++;
        i++;
    }
    for (i = 0; i < 3; i++)
    {
        if (before[i] == 'r') 
	{
	    result += 4;
	    r = 1;
	}
        if (before[i] == 'w') 
	{
	    result += 2;
	    w = 1;
	}
        if (before[i] == 'x') 
	{
	    result += 1;
	    x = 1;
	}
    }
    for (i = 0; i < count; i++)
    {
    	if (calculate[i][0] == '+')
	{
            if (calculate[i][1] == 'r' && r == 0)
	    {
		result += 4;
		r = 1; 
	    }
            if (calculate[i][1] == 'w' && w == 0) 
	    {
		result += 2;
		w = 1;
	    }
            if (calculate[i][1] == 'x' && x == 0)
	    {
		result += 1;
		x = 1;
	    }
        }
	else if (calculate[i][0] == '-')
	{
            if (calculate[i][1] == 'r' && r == 1)
	    {
		result -= 4;
		r = 0;
	    }
            if (calculate[i][1] == 'w' && w == 1)
	    {
		result -= 2;
		w = 0;
	    }
            if (calculate[i][1] == 'x' && x == 1)
	    {
	        result -= 1;
		x = 0;
	    }
        }
    }
    printf("%d", result);
    return 0;
}
