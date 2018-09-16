#include<stdio.h>
#include<stdlib.h>
void bubblesort(int *a)
{
	int i,j,tmp;
	for(i=0;i<5;i++)
	{
		int flag=0;
		for(j=0;j<5-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
				flag++;
			}
		}
	}
}
int main()
{
	int a[5]={1,6,5,4,3};
	bubblesort(a);
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
}

