#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	vector<int> vec(arr,arr+5);
	vec.insert(vec.begin(),100);
	sort(vec.begin(),vec.end());
	vector<int>::iterator begin = vec.begin();
	vector<int>::iterator end = vec.end();	
	vector<int>::iterator it;
	it = find(begin,end, 3);
	if(it!=end)
	printf("3 is here");
	else
	printf(" not");
} 
