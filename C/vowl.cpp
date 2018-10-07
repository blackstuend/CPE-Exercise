#include<set>
#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	char vowl[10]="aeiou";
	set<char> comp;
	char word[100];
	for(int i=0;i<strlen(vowl);i++)
	{
		comp.insert(vowl[i]);
	}
	scanf("%s",word);
	for(int i=0;i<strlen(word);i++)
	{
		if(comp.count(word[i])==1)
		{
			printf("this words have vowl");
			break;
		}
	}
}
