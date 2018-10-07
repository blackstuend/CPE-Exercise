#include<queue>
using namespace std;
#include<iostream>
int main()
{
	queue<int> q;
	for(int i=0;i<10;i++)
	{
		q.push(i);
	}
	int size=q.size();
	printf("%d",q.front());
}
