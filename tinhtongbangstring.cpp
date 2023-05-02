#include<iostream>
#include<string.h>
using namespace std;
string tinhTong(string s1,string s2);
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	string s=tinhTong(s1,s2);
	cout<<s;
	
}
string tinhTong(string s1,string s2)
{
	string s="";
	int nho=0;
	while(s1.size()<s2.size())
	    s1="0"+s1;
	while(s2.size()<s1.size())
	    s2="0"+s2;
	int len=s1.size()-1;
	for(int i=len;i>=0;i--)
	  {
	  	int so=int(s1[i]-'0')+int(s2[i]-'0')+nho;
	  	s=char(so%10+'0')+s;
	  	nho=so/10;
	  }
	if(nho>0)
	  s=char(nho+'0')+s;
	return s;
}