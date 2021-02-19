#include <iostream>
/* 输入n打印菱形 */

int main()
{
    int i,j,n;
    
    printf(" 请输入菱形行数 :");
    scanf(" %d",&n);
    
    
    for(i=1;i<=n/2+1;i++)//打印上三角
    {
        for(j=1;j<=n/2+1-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    
    for(i=1;i<=n/2;i++)//打印下三角
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=2*(n/2)-i;j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}