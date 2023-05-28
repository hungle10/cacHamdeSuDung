//(n×(n+1)^2×(n+2))/12
#include<bits/stdc++.h>
using namespace std;
string tinhTong(string s1,string s2);
string tinhTich(string A,string B);
void daoNguoc(string &S);
string chiaSoLon(string A,long long b);
void xoaSo0Dau(string &S);
int main()
{
	string n;
	cin>>n;
	string nCongMot=tinhTong(n,"1");
	string nCongMotBinh=tinhTich(nCongMot,nCongMot);  //(n+1)^2
	string nCongHai=tinhTong(n,"2");  //n+2
	string tu=tinhTich(tinhTich(n,nCongMotBinh),nCongHai);
	string kq=chiaSoLon(tu,12);
	cout<<kq;
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
string tinhTich(string A,string B)
{
	string C="";
	daoNguoc(A);
	daoNguoc(B);
	int iA,iB;
	for(int i=0;i<A.length()+B.length();i++)
	   C=C+'0';
	for(iB=0;iB<B.length();iB++)
	   {
	   	   int nho=0;
	   	   for(iA=0;iA<A.length();iA++)
	   	       {
				  int x=(B[iB]-'0')*(A[iA]-'0')+nho+(C[iA+iB]-'0');
	   	          C[iA+iB]=char(x%10+'0');
	   	          nho=x/10;
	   	        }
	   	        if(nho>0)
	   	        C[iA+iB]=char(nho+'0');
	   	}

	if(C[iA+iB-1]=='0')
	    C.erase(C.begin()+iA+iB-1);
    daoNguoc(C); 
	return C;
}
void daoNguoc(string &S)
{
	reverse(S.begin(),S.end());
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


