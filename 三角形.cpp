#include<stdio.h>
#define N 20
int main()
{
	int a[N][N] = { {0},{0,1} };
	int n, i, j,k=0;
	printf("请输入行数:\n");
	scanf_s("%d", &n);
	
	for (i = 2; i <= n; i++)
		for (j = 1; j <= i; j++)//i==j
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
	
	printf("%d行%d列的杨辉三角:\n", n, n);
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%6d", a[i][j]);
		printf("\n");
	}
	return 0;
}