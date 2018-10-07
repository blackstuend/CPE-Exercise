#include<set>
#include<iostream>

using namespace std;

int main()
{
	set<int> myset;
	myset.insert(20);
	myset.insert(30);
	myset.insert(40);
	myset.erase(20);
	printf("%d",myset.count(20));
}
