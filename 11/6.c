#include <stdio.h>
#include <string.h>

int main()
{
    int j, arr[32], bits[32];
    char str[500], result[32];
    scanf("%s", str);
    for (int i = 0; i < 32; i++) 
    {
        arr[i] = 0;
    }
    for (j = 0; j < strlen(str); j++) 
    {
        arr[(j + 1) % 32] = arr[(j + 1) % 32] + str[j];
    }
    for (int i = 0; i < 32; i++) 
    {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        result[i] = (bits[i] % 85) + 34;
    }
    for (int i = 0; i < 32; i++) 
    {
        printf("%c", result[i]);
    }
    return 0;
}
