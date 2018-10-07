#include<map>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	map<string,string> m;
	m["r123"]="student_first";
	m["r456"]="student_secnod";
	m.insert(pair<string,string>("r000","student_zero"));
	map<string,string>::iterator iter;
	iter=m.find("r123");
	m.erase(iter);
	 iter = m.find("r123");
	if(iter!=m.end())
	cout << "find value is" <<iter->first<<endl;
	else					  
	cout << "not find"<<endl;
}
