#include <bits/stdc++.h>

using namespace std;
void nhapMaTran(string A[][100],string B[][100],int n);
void xuat(string A[][100],int n);
void daoNguoc(string &S);
string tinhTich(string A,string B);
string tinhTong(string s1,string s2);
void nhanMaTran(string A[][100],string B[][100],string C[][100],int n);
void nhapMaTran(string A[][100],string B[][100],int n);

int main()
{
	int n;
	cin>>n;
	string A[100][100];
	string B[100][100];
	string C[100][100];
	nhapMaTran(A,B,n);
	nhanMaTran(A,B,C,n);
	xuat(C,n);
}
void nhapMaTran(string A[][100],string B[][100],int n)
{
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++)
	     {
	     	fflush(stdin);
	       cin>>A[i][j];
	    }
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++)
	      {
	      	 fflush(stdin);
	      	 cin>>B[i][j];
	       }
}
void nhanMaTran(string A[][100],string B[][100],string C[][100],int n)
{
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++)
	       {
	       	 C[i][j]="0";
	       	 for(int k=0;k<n;k++)
	       	     C[i][j]=tinhTong(C[i][j],tinhTich(A[i][k],B[k][j]));
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
void xuat(string A[][100],int n)
{
	for(int i=0;i<n;i++)
	  {
	    for(int j=0;j<n;j++)
	       cout<<A[i][j]<<" ";
	    cout<<endl;
	  }
}
	       
