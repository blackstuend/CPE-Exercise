#include<stdio.h>

int main()
{
	int n1,n2;
	while(scanf("%d %d",&n1,&n2)!=EOF)
	{
		int x,i;
		int pool[100]={0};
		for(i=0;i<n2;i++)
		{
			scanf("%d",&x);
			pool[x]=1;
		}
		if(n1==n2)
		{
		printf("*\n");
		continue;
		}
			for(i=1;i<=n1;i++)
			{
				if(pool[i]==0)
				printf("%d ",i);
			}
			printf("\n");
	}
}
