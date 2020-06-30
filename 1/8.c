#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);

int main()
{
    int p, q;
    scanf("%d %d", &p, &q);
    printf("%.4f", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double))
{
    double a = -20.0, b = 20.0;
    double x = (a + b) / 2;
    double fa, fb, fx = f(p, q, x);
    while (fabs(fx) >= EPSILON)
    {
        fa = f(p, q, a);
        fb = f(p, q, b);
        x = (a + b) / 2.0;
        fx = f(p, q, x);
        if (fa > 0 && fx > 0 || fa < 0 && fx < 0)
	{
            a = x;
        } 
	if (fb > 0 && fx > 0 || fb < 0 && fx < 0)
	{
            b = x;
        }
    }
    return x;
}

double f(int p, int q, double x)
{
    return p * x + q;
}
