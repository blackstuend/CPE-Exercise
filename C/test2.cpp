#include<algorithm> 
#include<stdlib.h>
#include<iostream>
using namespace std;
int main(void)
{
	int a[3]={3,4,5};
	sort(a,a+3);
	for(int i=0;i<3;i++)
	{
		printf("%d\n",a[i]);
	}00
}
