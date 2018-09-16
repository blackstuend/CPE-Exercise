#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int N;
	int i,j;
	while(scanf("%lld",&N)!=EOF)
	{
		int k=-1;
		long long int result;
		for(i=0;;i++)
		{
			for(j=0;j<i*2+1;j++)
				k=k+2;
			if(N==i*2+1)
			{
				result=k*3-6;
				printf("%lld\n",result);
				break;
			}
		}
	}
}

