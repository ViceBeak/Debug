#include <stdio.h>
#include <string.h>
    
int main()
{
    int i, j, arr[32] = {0}, bits[32];
    char input[500], output[33];
    i = 0;
    scanf("%s", input);
    int length = strlen(input);
    while(i < length) 
    {
        arr[(i + 1) % 32] += (int)input[i];
        i++;
    }
    for(j = 0; j < 32; j++) 
    {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
    }
    for(int j = 0; j < 32; j++)
    {
        output[j] = bits[j] % 85 + 34;
    }
    output[32] = '\0';
    printf("%s", output);
    return 0;
}
