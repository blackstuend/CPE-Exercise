#include<stack>
#include<iostream>

using namespace std;

int main()
{
	stack<int> s;
	for(int i=0;i<10;i++)
	{
		s.push(i);
	}
	s.pop();
	printf("%d",s.top());
	
}
