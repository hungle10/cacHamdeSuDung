#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
void quyHoachDongTaoBang(string s1,string s2,string dapan[][101]);
string soSanh(string s1,string s2);
void chen(string S,int k);
void latNguoc(string &S);
void khoiTao(string dapan[][101]);
void xoaSo0(string &s);
int main()
{
	string s1,s2;
	string dapan[101][101];
	getline(cin,s1);
	getline(cin,s2);
	khoiTao(dapan);
	quyHoachDongTaoBang(s1,s2,dapan);
	xoaSo0(dapan[s1.length()][s2.length()]);
	if(dapan[s1.length()][s2.length()]=="")
	cout<<-1;
	else
	cout<<dapan[s1.length()][s2.length()];
}
void quyHoachDongTaoBang(string s1,string s2,string dapan[][101])
{
	int n1=s1.length();
	int n2=s2.length();
	for(int i=1;i<=n1;i++)
	   for(int j=1;j<=n2;j++)
	      if(s1[i-1]==s2[j-1])
	         dapan[i][j]=dapan[i-1][j-1]+s1[i-1];
	       else
	          dapan[i][j]=soSanh(dapan[i][j-1],dapan[i-1][j]);
}
string soSanh(string s1,string s2)
{
	int n1=s1.length();
	int n2=s2.length();
	if(n1>n2)
	chen(s2,n1-n2);
	else
	chen(s1,n2-n1);
	if(s1.compare(s2)>=0)
	   return s1;
	return s2;
}
void chen(string S,int k)
{
	latNguoc(S);
	int l=S.length();
	for(int i=0;i<k;i++)
	   S[l+i]='0';
    latNguoc(S);
}
void latNguoc(string &S)
{
	reverse(S.begin(),S.end());
}
void khoiTao(string dapan[][101])
{
	
	for(int i=0;i<101;i++)
	   for(int j=0;j<101;j++)
	     dapan[i][j]="";
}
void xoaSo0(string &s)
{
	while(s[0]=='0')
	   s.erase(s.begin());
}
	       
