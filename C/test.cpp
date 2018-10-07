#include<iostream>
#include<stdlib.h>
#include<algorithm>

using namespace std;

bool comp(int i,int j)
{
	return i<j;
}
int main()
{
	int a[5]={4,2,10,6,7};
	sort(a,a+5,comp);
	for(int i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
}
