#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k=0,f=0,flag=0; //k來判斷掃描的數字位置,f判斷數道地幾個 
	char str[1000]={0};
	char scan[100],ch[10];  //scan掃進來的數字 
	scanf("%s",scan); 
	for(i=1;;i++)
	{
		sprintf(ch,"%d",i); //將數字轉字串存進ch
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
