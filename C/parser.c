#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=100;
	int b[10];
	int c;
	int i;
	for(i=0;i<10;i++)
	{
		if(a==0)
		break;
		b[i]=a%10;
		a=a/10;	
	}
	printf("%d",b[2]);
	printf("%d",i);
}
