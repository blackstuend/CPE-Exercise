#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int num;
	scanf("%d",&num);
	while(num--)
	{
		int day,nums;
		scanf("%d",&day);
		scanf("%d",&nums);
		int n,count=0;
		int array[1000]={0};
		while(nums--)
		{
			scanf("%d",&n);
			for(int i=n;i<=day;i=i+n)
			{
				int k=i%7;
				if(k ==6 || k==0)
				continue;
				else if(array[i]!=1)
				{
					array[i]=1;
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
}
