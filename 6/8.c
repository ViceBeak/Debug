#include  <stdio.h>
int main()
{
    char n;
    int a[3] = {0, 0, 0};
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%c", &n);
        if (n == '\n')
	{
            break;
        }
        else if (n == 'r')
	{
            a[0] = 1;
        }
        else if (n == 'w')
	{
            a[1] = 1;
        }
        else if (n == 'x')
	{
            a[2] = 1;
        }
    }
    while (scanf("%c", &n) != EOF)
    {
        if (n == '\n')
	{
            continue;
        }
        if (n == '+')
	{
            scanf("%c", &n);   
            if (n == 'r')
	    {
                a[0] = 1;
            }
            else if (n == 'w')
	    {
                a[1] = 1;
            }
            else if (n == 'x')
            {
                a[2] = 1;
            }  
        }
        else if (n == '-')
	{
            scanf("%c", &n); 
            if (n == 'r')
	    {
                a[0] = 0;
            }
            else if (n == 'w')
	    {
                a[1] = 0;
            }
            else if (n == 'x')
	    {
                a[2] = 0;
            }  
        }
    }
    int o = a[0] * 2 * 2 + a[1] * 2 + a[2];
    printf("%d",o);
    return 0;
}
