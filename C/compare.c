#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k=0,f=0,flag=0; //k�ӧP�_���y���Ʀr��m,f�P�_�ƹD�a�X�� 
	char str[1000]={0};
	char scan[100],ch[10];  //scan���i�Ӫ��Ʀr 
	scanf("%s",scan); 
	for(i=1;;i++)
	{
		sprintf(ch,"%d",i); //�N�Ʀr��r��s�ich
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
