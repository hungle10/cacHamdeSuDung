#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
string chiaSoLon(string A,long long b);
void xoaSo0Dau(string &S);
int main()
{
	string s1;
	long long b;
	getline(cin,s1);
	fflush(stdin);
	cin>>b;
	string kq=chiaSoLon(s1,b);
	cout<<kq;
}
string chiaSoLon(string A,long long b)
{
	int n=0;
	int i=0;
	string KQ="";
	long long number=0;
	while(i<A.length())
	{
		number=number*10+int(A[i]-'0');
		KQ=KQ+char(number/b+'0');
		number=number%b;
		i++;
	}
	xoaSo0Dau(KQ);
	return KQ;
}
void xoaSo0Dau(string &S)
{
	while(S[0]=='0')
	{
		    S.erase(S.begin() + 0); 
	}
}

