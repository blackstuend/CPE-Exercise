#include<iostream>
#include<cstdlib>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a[551]={0};
		char b;
		int i,x;
		for(i=0;;i++)
		{
			scanf("%d%c",&a[i],&b);
			if(b=='\n')
			break;
		}
		int sum=0,min,minnum,j;
		for(j=1;j<=a[i];j++)
		{
			sum=0;			
			for(int k=0;k<=i;k++)
			{
				sum=abs(j-a[k])+sum;
			}
			if(j==1)
			min=sum;
			else if(min>=sum)
			{
				min=sum;
				minnum=j;
			}
		}
		printf("%d\n",minnum);
	}
}
