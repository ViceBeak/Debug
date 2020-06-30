#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i = 1, r = 0, w = 0, x = 0;
    char input, plus[2] = "+", minus[2] = "-", oprator[2] = "@", rr[2] = "r", ww[2] = "w", xx[2] = "x";
    while (scanf("%c", &input) != EOF)
    {
        char str[2] = "\0";
        str[0] = input;
        if (strcmp(str, rr) == 0)
	{
            if (strcmp(oprator, plus) == 0)
	    {
                r = 1;
            }
	    else if (strcmp(oprator, minus) == 0)
	    {
                r = 0;
            }
	    else
	    {
                r = 1;
            }
        }
	else if (strcmp(str, ww) == 0)
	{
            if (strcmp(oprator, plus) == 0)
	    {
                w = 1;
            }
	    else if (strcmp(oprator, minus) == 0)
	    {
                w = 0;
            }
	    else 
	    {
                w = 1;
            }
        }
        else if (strcmp(str, xx) == 0)
	{
            if (strcmp(oprator, plus) == 0)
	    {
                x = 1;
            }
	    else if (strcmp(oprator, minus) == 0)
	    {
                x = 0;
            }
            else 
	    {
                x = 1;
            }
        }
	else if (strcmp(str, plus) == 0)
	{
            oprator[0] = '+';
        } 
	else if (strcmp(str, minus) == 0 && i > 3)
	{
            oprator[0] = '-';
        }
        i++;
    }
    int output = x * pow(2, 0) + w * pow(2, 1) + r * pow(2, 2);
    printf("%d", output);
    return 0;
}
