#include<stdio.h>
#include<stdlib.h>
void prime(int num,int* array)
{
	int i,j,flag=0,f;
	for(i=2;i<num;i++)
		{
			int flag=0;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				array[f]=i;	
				f++;
			}
		}
}
int main()
{
	int num;
	while(1)
	{
		scanf("%d",&num);
		if(num==0)
		break;
		int i,j,f;
		int array[10000]={0};
		prime(num,array);
		for(i=0;;i++)
			if(array[i]==0)
			break;
		int time=0,k;
		for(j=0;j<i;j++)
		{
			for(k=j;k<i;k++)
			{
				if(array[j]+array[k]==num)
				time++;
			}
		}
		printf("%d\n",time);
	} 
}
