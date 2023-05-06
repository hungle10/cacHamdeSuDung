#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;
string tinhTich(string A,string B);
void daoNguoc(string &S);
int main()
{
	string s1,s2;
	getline(cin,s1);
	fflush(stdin);
	getline(cin,s2);
	fflush(stdin);
	string s=tinhTich(s1,s2);
	cout<<s;
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
	if(C[iA+iB-1]!='0')
	   C[iA+iB]='\0';
	else 
	   C[iA+iB-1]='\0';
	daoNguoc(C); 
	//C.erase(C.begin()+0);
	return C;
}
void daoNguoc(string &S)
{
	reverse(S.begin(),S.end());
}
