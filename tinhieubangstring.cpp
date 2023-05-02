#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
void tinhHieu(string S1,string S2,string &S);
void tinhTruSoLonChoSoNho(string S1,string S2,string &S);
void daoNguoc(string &S);
void chuanHoa(string &S1,string &S2);
void chen(string &S,int k);
void xoaSo0(string &S);
int main()
{
	string S1;
	string S2;
	string S="";
	getline(cin,S1);
	fflush(stdin);
	getline(cin,S2);
	chuanHoa(S1,S2);
	tinhHieu(S1,S2,S);
	cout<<S;	
}
void chuanHoa(string &S1,string &S2)
{
	int l1=S1.length();
	int l2=S2.length();
	if(l1>l2)
	{
		chen(S2,l1-l2);
	}
	else
		chen(S1,l2-l1);
}
void chen(string &S,int k)
{
	int l=S.length();
	for(int i=0;i<k;i++)
	   S='0'+S;
}
void tinhHieu(string S1,string S2,string &S)
{
	if (S1.compare(S2)>=0)
	  {
	    tinhTruSoLonChoSoNho(S1,S2,S);
	   xoaSo0(S);
      }
	else
	    {
		tinhTruSoLonChoSoNho(S2,S1,S);
	    int l=S.length();
	    xoaSo0(S);
	    S='-'+S;
	    }
}
void tinhTruSoLonChoSoNho(string S1,string S2,string &S)
{
	daoNguoc(S1);
	daoNguoc(S2);
	int l=S1.length();
	int nho=0;
	for(int i=0;i<l;i++)
	    {
	    	int t=(S1[i]-'0')-(S2[i]-'0')-nho;
	    	if(t<0)
	    	   {
	    	   	   int temp=t+10;
	    	   	   S=S+char(temp+'0');
	    	   	   nho=1;
	    	    }
	    	else
	    	  {
	    	  	S=S+char(t+'0');
	    	  	nho=0;
	    	   }
	    }
	daoNguoc(S);
}
void daoNguoc(string &S)
{
	reverse(S.begin(),S.end());
}
void xoaSo0(string &S)
{
	int l=S.length();
	while(S[0]=='0')
	{
		S.erase(S.begin() + 0); 
	}
}