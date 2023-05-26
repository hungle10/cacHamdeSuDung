#include<iostream>
#include<string.h>
using namespace std;
int doSau(string S,int n);
int main()
{
	string S;
	cin>>S;
	int n=S.length();
	int kq=doSau(S,n);
	cout<<kq;
}
int doSau(string S,int n)
{
	int dosau=0;
	int mongoac=0;
	for(int i=0;i<n;i++)
	   {
	   	 if(S[i]=='(')
	   	    mongoac++;
	   	  else
	   	   {
	   	   	if(mongoac==0)
	   	   	    return -1;   //do sau khong hop le 
	   	   	if(mongoac>dosau)
	   	   	  dosau=mongoac;
	   	   	  mongoac--;
	   	   	}
	   	}
	return dosau;
}
