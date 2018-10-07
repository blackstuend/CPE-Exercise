#include<iostream>

using namespace std;

int main()
{
	long long int n,m;
	while(scanf("%d %d",&n,&m)!=0)
	{
		long long int x=0,flag=0;
		for(long long int i=n;;i++)
		{
			for(long long int j=0;j<i;j++)
			{
				x++;
				if(x==m)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
			printf("%lld\n",i);
			break;
			}
		}
	}
}
