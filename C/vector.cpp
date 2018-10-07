#include<iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;
	for(int i=0;i<10;i++)
	{
		vec.push_back(i);
	}
	for(int i=0;i<9;i++)
	{
		vec.pop_back();
	}
	if(vec.empty())
	printf("vec is emtpy");
}
