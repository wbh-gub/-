#include <iostream>
#include <graphics.h>

//冒泡排序
int paixv(int a[9999],int n)//自定义冒泡排序函数
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i ;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;

			}
		}
	}
}

int main(int argc, char** argv)
{
	int a[9999],n,i;
	
	scanf("%d",&n);
	
	randomize();
	
	for(i=0;i<n;i++)
	{
		a[i]=random(9999);
	}
	
	paixv(a,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}