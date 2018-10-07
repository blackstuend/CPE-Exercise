#include<iostream>
#include<cstdlib>

using namespace std;

int add(int);
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF && n!=0)
	{
		printf("%d\n",add(n));	
	}
} 
int add(int num)
{
	int i,sum=0;
	while(num>0)
	{
		i=num%10;	
		num=num/10;
		sum=sum+i;
	}
	if(sum>=10)
	sum=add(sum);
	return sum;
}
