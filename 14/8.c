#include <stdio.h>

int main()
{
    int shuru, geshu, hangshu, shuru2;
    scanf("%d", &shuru);
    shuru2 = shuru;
    for ( hangshu = 1; hangshu <= shuru; hangshu++)
    {
        if (hangshu != 1)
        {
            printf("\n");
	}
        shuru2 = shuru - hangshu + 1;
        for (geshu = 1; geshu <= shuru; geshu++)
        {
            printf("%d", shuru2);
            if (shuru2 > 1)
            {
                printf(" ");
            }
            else
            {
                break;
            }
            shuru2--;
        }
    }
    return 0;
}