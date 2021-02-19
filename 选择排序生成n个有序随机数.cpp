#include <iostream>
#include <graphics.h>

//选择排序

int main(int argc, char** argv)
{
	int i,j,t,k,n,min,a[9999];
	scanf("%d",&n);
	randomize();
	for(i=0;i<n;i++)
	{
		a[i]=random(9999);
	}
	
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		k=i;
		for(j=i;j<n;j++)
		{
			if(a[j]<min)
			{
				k=j;
				min=a[j];
			}
		}
		t=a[i];
		a[i]=a[k];
		a[k]=t;
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}