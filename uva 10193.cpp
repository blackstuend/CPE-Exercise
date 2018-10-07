#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
bool gcd(int,int);
int main()
{
	int num,k;
	char a[100],b[100];
	scanf("%d",&num);
	for(k=0;k<num;k++)
	{
		scanf("%s",a);
		scanf("%s",b);
		int suma=0,j,sumb=0;
		int lena=strlen(a);
		int lenb=strlen(b);
		for(int i=0;i<lena;i++)
		{
			int s=a[i]-'0';
			for(j=0;j<lena-i-1;j++)
			{
				s=s*2;
			}
			suma=s+suma;
		}
		for(int i=0;i<lenb;i++)
		{
			int s=b[i]-'0';
			for(j=0;j<lenb-i-1;j++)
			{
				s=s*2;
			}
			sumb=s+sumb;
		}
		if(gcd(suma,sumb))
		printf("Pair #%d: All you need is love!\n",k+1);
		else
		printf("Pair #%d: Love is not all you need!\n",k+1);
	}
}
bool gcd(int a,int b)
{
	int m,temp,n;
	n=a,m=b;
	while(m>1)
	{
		temp=m;
		m=n%m;
		n=temp;
	}
	if(m==1)
	return false;
	else
	return true;
}

