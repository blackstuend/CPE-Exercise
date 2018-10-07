#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int nums[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&nums[i]);
		}
		int comp[100]={0},k;
		bool flag=true;
		for(int i=0;i<n-1;i++)
		{
			k=abs(nums[i+1]-nums[i]);
			if(k>n-1 || comp[k]==1)
			flag=false;
			comp[k]=1;	
		}
		if(flag==true)
		printf("Jolly\n");
		else
		printf("Not jolly\n");
	}
}
