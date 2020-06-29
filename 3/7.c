#include <stdio.h>
 
int main()
{
    int matrix[100][100];
    int m;
    int n;
    int l = 1, i, j, k;
    scanf("%d%d",&m,&n);
    for (i = 0; i<m; i++) {
          for (j = 0; j<n; j++) {
             scanf("%d",&matrix[i][j]);
         }
     }
     k = 0;
     i = 0;
   j = 0;
    for (;;) {

        for (; j<n - i; j++) {
             printf("%d",matrix[i][j]);
             k++;
             if (k == m*n)
                 break;
             else
                 printf(" ");
             if (j == n - i - 1) {
                 i++;
                 l = 2;
                break;
             }
         }
         if (k == m*n)
             break;
 
         for (; i<m - n + 1 + j; i++) {
             printf("%d",matrix[i][j]) ;
             k++;
             if (k == m*n)
                 break;
             else 
                 printf(" ");
             if (i == m - n + j) {
                 j--;
                 l = 3;
                 break;
             }
         }
         if (k == m*n)
             break;
         for (; j >= m - 1 - i; j--) {
             printf("%d",matrix[i][j]) ;
             k++;
             if (k == m*n)
                 break;
             else
                 printf(" ");
             if (j == m - i-1) {
                 i--;
                 l = 4;
                 break;
             }
         }
         if (k == m*n)
             break;
         for (; i>j; i--) {
             printf("%d",matrix[i][j]) ;
             k++;
             if (k == m*n)
                 break;
             else
                 printf(" ");
             if (i == j + 1) {
                 j++;
                 l = 1;
                 break;
             }
         }
 
         if (k == m*n)
             break;
     }
     return 0;
 }
