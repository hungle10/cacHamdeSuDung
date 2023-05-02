#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
string tinhTong(string s1,string s2);
int main()
{
    int n,k;
	cin>>n>>k;
	string C[n+1][n+1];
    for(int i=0;i<=n;i++)
	   {
	   	  C[i][0]='1';
	   	  C[i][i]='1';
	   	}
	for(int i=2;i<=n;i++)
	   for(int j=1;j<i;j++)
	      {
	         C[i][j]=tinhTong(C[i-1][j-1],C[i-1][j]);                    // C[i][j]=C[i-1][j-1]+C[i-1][j];
      }
    cout<<C[n][k];
        
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