#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<string.h>
int find(char*);
using  namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int day[2]={0},year[2]={0};
		char month[20][20]={0};
		scanf("%s %d, %d",month[0],&day[0],&year[0]);
		scanf("%s %d, %d",month[1],&day[1],&year[1]);
		int nmonf=find(month[0]);
		int nmonl=find(month[1]);
		int count=0;
		for(int j=year[0];j<=year[1];j++)
		{
			if(j%4!=0)
				continue;
			else if(j%400!=0 && j%100==0)
				continue;
			else if(year[0]==year[1])
				{
					if(nmonf<=3 && nmonl>=3)
					{
					count++;
					continue;
					}
					else if(nmonf<=3 && nmonl==2 && day[1]==29)
					{
					count++;
					continue;
					}
					else if(nmonf>=3)
					continue;
				}
			else if(year[0]==j && nmonf>=3)
			continue;
			else if(year[1]==j && nmonl>3)
				count++;
			else if(year[1]==j && nmonl==3 &&day[1]==29)
				count++;
			else 
				count++;
				printf("j=%d count=%d\n",j,count);
		}
		printf("Case %d: %d\n",i,count);
	}
}
int find(char *str)
{
	char months[15][20]={"nomonth","January","February","March","April","May","June","July","August","September","October","November", "December"};
	for(int i=1;i<13;i++)
	{
		if(strcmp(months[i],str)==0)
			return i;
	}
}
