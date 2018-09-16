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
int dbubblesort(int *a)
{
	int i,j;
	for(i=0;i<5;i++)
	{
		int flag=0;
		for(j=0;j<5-i-1;j++)
		{
			int tmp;
			if(a[j]<a[j+1])
				{
					tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
					flag=1;
				}
		}
		if(flag==0)
		break;
	} 
}
int main()
{
	int num1,num2;
	int snum;
	while(1)
	{
		scanf("%d %d",&num1,&num2);
		if(num1 == 0 && num2 == 0)
		break;
		int a[num2-1][10000];
		int c[num2-1];
		while(num1--)
		{
			scanf("%d",&snum);
			int divnum=snum%num2;
			if(divnum<0)
			 divnum=-divnum;
			 a[divnum][c[divnum]]=snum;
			 c[divnum]++;
		}
			int i;
		for(i=0;i<num2;i++)
		{
			int j;
			dbubblesort(a[i]);
			for(j=0;;j++)
			{
				if(a[i][j]==0)
				break;
				if(a[i][j]%2==1)
					printf("%d\n",a[i][j]);
			}
			bubblesort(a[i]);	
				for(j=0;;j++)
			{
				if(a[i][j]==0)
				break;
				if(a[i][j]%2==0)
					printf("%d\n",a[i][j]);
			}
		}
	}
}

