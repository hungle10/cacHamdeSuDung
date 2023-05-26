#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;
void xuat(char X[],int nX);
int main()
{
	string  X,Y;
	getline(cin,X);
	fflush(stdin);
	getline(cin,Y);
	int m=X.size();
	int n=Y.size();
	int F[m+1][n+1];
	for(int i=0;i<=m;i++)
	   for(int j=0;j<=n;j++)
	     { if(i==0||j==0)
	         F[i][j]=0;
	       else 
	          {
	          	if(X[i-1]==Y[j-1])
	          	   F[i][j]=F[i-1][j-1]+1;
	          	else
	          	   F[i][j]=max(F[i][j-1],F[i-1][j]);
	          	}
	        }
	// truy vet 
	char P[10000];
	int nP=0;
	int x=F[m][n];
	for(int i=m;i>=0;i--)
	   {
	   	 for(int j=n;j>=0;j--)
	   	    {
	   	    	if(F[i][j]==x&&X[i-1]==Y[j-1]&&x>0)
	   	    	   {
	   	    	   	 P[nP++]=X[i-1];
	   	    	   	 x--;
	   	    	   	 i--;
	   	    	   	 }
	   	    }
	   	}
	P[nP++]='\0';
	strrev(P);
	xuat(P,nP);
}
void xuat(char X[],int nX)
{
	for(int i=0;i<nX;i++)
	   cout<<X[i];
}
