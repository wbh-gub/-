#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int i,j,t,max,k,a[10];
	
	for(i=0;i<10;i++)
	{
		printf("please input your num a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<9;j++)
	{
		max=a[j]; 
		k=j;
		
		for(i=j;i<10;i++)
		{
			if (a[i]>max)
 			{
			max=a[i];
			k=i;//第几个最大值 
			}
		}
		
		t=a[j];
		a[j]=a[k];
		a[k]=t;
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d   ",a[i]);
	}
	return 0;
}
