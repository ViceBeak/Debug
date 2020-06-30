#include <stdio.h>
#include<string.h>

const int maxn = 500;

int main()
{
    int i, j, k,bits[32], arr[32] = {0};
    char str[maxn], rstr[32];
    scanf("%s", str);
    k = strlen(str);
    for (i = 0; i < k; i++) 
    {
        arr[(i + 1) % 32] += str[i];
    }
    for (j = 0; j < 32; j++) 
    {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
        rstr[j] = bits[j] % 85 + 34;
    }
    for (i = 0; i < 32; i++) 
    {
        printf("%c", rstr[i]);
    }
    return 0;
}
