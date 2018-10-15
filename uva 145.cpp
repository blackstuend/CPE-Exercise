#include<iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
int main()
{
	char ch,str[10];
	int  f_h,f_m,e_h,e_m;
	while (scanf("%c",&ch)!=EOF && ch != '#') {
		scanf("%s%d%d%d%d",str,&f_h,&f_m,&e_h,&e_m);
		getchar();
		int mm=0,am=0,em=0,min=1;
		for(int i=f_h;;i=(i+1)%24)
		{
//			printf("i is %d e_h is %d",i,e_h);
//			printf("f_m is %d,e_m is %d\n",f_m,e_m);
			if(i>=8 && i<18)
			{
				if(i==e_h && e_m>=f_m)
				{
					mm=e_m-f_m+mm;
					break;
				}
				else
				{
					mm=60-f_m+mm;
					f_m=0;
				}
			}
			else if(i>=18 && i<22)
			{
				if(i==e_h && e_m>=f_m)
				{
					am=e_m-f_m+am;
					break;
				}
				else
				{
					am=60-f_m+am;
					f_m=0;
				}
			}
			else
			{
				if(i==e_h && e_m>=f_m)
				{
					em=e_m-f_m+em;
					break;
				}
				else
				{
					em=60-f_m+em;
					f_m=0;
				}
			}
		}
		float money;
		if(ch=='A')
			money=mm*0.1+am*0.06+em*0.02;
		else if(ch=='B')
			money=mm*0.25+am*0.15+em*0.05;
		else if(ch=='C')
			money=mm*0.53+am*0.33+em*0.13;
		else if(ch=='D')
			money=mm*0.87+am*0.47+em*0.17;
		else
			money=mm*1.44+am*0.8+em*0.3;
		printf("%s %d %d %d %c %.2f\n",str,mm,am,em,ch,money);
	}
}

