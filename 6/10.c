#include <stdio.h>

int main()
{
    char pms[3], change_pms[100][2];
    int i = 0, j = 0, a = 0;
    scanf("%s", pms);
    while (scanf("%s", change_pms[i++]) != EOF);
    for (i = 0; i < 3; i++)
    {
        if (pms[i] == 'r')
	{
            a += 4;
        }
	else if (pms[i] == 'w')
	{
            a += 2;
        }
	else if (pms[i] == 'x')
	{
            a += 1;
        } 
    }
    for (i = 0; i < 100; i++)
    {
        if (change_pms[i][j] == '+')
	{
            if (change_pms[i][j + 1] == 'r')
	    {
                a |= 4;   
            }
	    else if (change_pms[i][j + 1] == 'w')
	    {
                a |= 2;
            }
	    else
	    {
                a |= 1;
            }
        }
	else if (change_pms[i][j] == '-')
	{
            if (change_pms[i][j + 1] == 'r')
	    {
                a &= 3;
            }
	    else if (change_pms[i][j + 1] == 'w')
	    {
                a &= 5;
            }
	    else
	    {
                a &= 6;
            }
        }
    }
    printf("%d", a);
    return 0;
}
