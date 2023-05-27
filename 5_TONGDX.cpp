
//S=11+22+33+...+nn
//VD n=12 ->S=11+22+33+44+55+...+1010+1111+1212
#include <bits/stdc++.h>
using namespace std;
string xuLy(int n);
string numberToString(unsigned int n);
string tinhTong(string s1,string s2);
int main()
{
	int n;
	cin>>n;
	 string kq=xuLy(n);
	 cout<<kq;
}
string xuLy(int n)
{
    int i=1;
	string tong="0";
	int res1;
    while(i<=n)
    {
    	int x=0;
    	int tam=i;
    	while(tam != 0)
  {
    x++;
    tam = tam / 10;
  }
	   res1=i*pow(10,x)+i;
	   string temp=numberToString(res1);
	   tong=tinhTong(tong,temp);
	   i++;
	}
	 return tong;
}
string numberToString(unsigned int n) {
    stringstream ss;
    ss << n;
    return ss.str();
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
/*long long xuLy(int n);   //khong su li so lon dc
int main()
{
	int n;
	cin>>n;
	 long long kq=xuLy(n);
	 cout<<kq;
}
long long xuLy(int n)
{
    int i=1;
	int tong=0;
	int res1;
    while(i<=n)
    {
    	int x=0;
    	int tam=i;
    	while(tam != 0)
  {
    x++;
    tam = tam / 10;
  }
	   res1=i*pow(10,x)+i;
	   tong=tong+res1;
	   i++;
	}
	 return tong;
}*/
