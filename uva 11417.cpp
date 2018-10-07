#include<iostream>
#include<cstdlib>
int gcd(int,int);
int main()
{
	int n;
	while(scanf("%d",&n) && n!=0)
	{
		int G=0;
		for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++)
		{
			G+=gcd(j,i);
		}
		printf("%d\n",G);
	}
}

int gcd(int a,int b)
{
	int t=1;
	while(t)
	{
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
