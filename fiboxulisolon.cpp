#include<iostream>
using namespace std;
string fiBo(int n);
string tinhTong(string s1,string s2);
int main()
{
	int n;
	cin>>n;
	string kq=fiBo(n);
	cout<<kq;
}
string fiBo(int n)
{
	if(n==0)
	  return "0";
	else if(n==1)
	  return "1";
	else
	{
		int i=2;
		string f0="0";
		string f1="1";
		string fn;
		while(i<=n)
		{
			fn=tinhTong(f0,f1);
			f0=f1;
			f1=fn;
		    i++;
		}
	return f1;
	}
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

