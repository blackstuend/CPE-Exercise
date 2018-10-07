#include<iostream>
#include<cstdlib>
#include<algorithm> 
#include<string.h> 
using namespace std;
bool comp(char *,char *);
int main()
{
	int num;
	scanf("%d",&num);
	while(num--)
	{
		char a[100]={0};
		char b[100]={0};
		scanf("%s",a);
		scanf("%s",b);
		if(comp(a,b))
		printf("Yes\n");
		else
		printf("No\n");
	} 
}
bool comp(char *a,char *b)
{
		int i,j,k;
		char vowl[10]="aeiou";
		if(strlen(a)!=strlen(b)) 
			return false;
		for(i=0;i<strlen(a);i++)
		{
			for(j=0;j<5;j++)
			{
				if(a[i]!=vowl[j])
					continue;
				else
					break;
			}
			if(j==5)
			{
				if(a[i]!=b[i])
					return false;
			}
			else
			{
				for(k=0;k<5;k++)
				{
					if(b[i]!=vowl[k])
					continue;
					else
					break;
				}	
			}
			if(k==5)
				return false;
			return true;
		}
}
