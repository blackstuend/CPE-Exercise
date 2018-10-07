#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k=0,f=0,flag=0; //kㄓ耞苯磞计竚,f耞计笵碭 
	char str[1000]={0};
	char scan[100],ch[10];  //scan苯秈ㄓ计 
	scanf("%s",scan); 
	for(i=1;;i++)
	{
		sprintf(ch,"%d",i); //盢计锣﹃秈ch
		strcat(str,ch);
		for(j=0;j<strlen(ch);j++)
		{
			if(scan[k]==str[f])
			k++;
			else
			k=0;
			f++;
			if(k==strlen(scan))
			flag++;
		}
	if(flag==1)
	break;
	}
	printf("%d",f-1);
}
