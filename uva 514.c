#include<stdio.h>
#include<stdlib.h>
int main()
{
	int many;
	while(scanf("%d",&many)!=EOF && many!=0)
	{
		int i,j;
		int num[100]={0};
		while(scanf("%d",&num[0])!=EOF && num[0])
		{
			int stack[100]={0},s=0,k=0;
				for(i=1;i<many;i++)
					scanf("%d",&num[i]);
				for(i=1;i<=many;i++)
				{
					int flag=0;
					if(i==num[k])
					{
						k++;
						flag=1;	
					}
					for(j=s;j>=0;j--)
					{
						if(num[k]==stack[s-1])
						{
						k++;
						s--;
						flag=1;
						continue;
						}
						break;
					}
					if(flag==0)
					{
						stack[s]=i;
						s++;
					}
				}
			if(k==many+1)
			printf("YES\n");
			else
			printf("NO\n");
		}
	}
}
