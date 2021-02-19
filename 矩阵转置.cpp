#include <iostream>
/* 输入矩阵并将其转置输出 */

int main(int argc, char** argv)
{
    int i, j,x,y,max,a[100][100];
    printf("请输入矩阵行和列：");
    scanf("%d %d",&x,&y);
    
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
        {
            printf("请按照矩阵元素位置输入 a[%d][%d]=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        
    printf("行：%d  列：%d\n",x,y);

    printf("转置前：\n");
    
    for(i=0;i<x;i++)
    {
         for(j=0;j<y;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("转置后: \n");
       
    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    
	return 0;
}