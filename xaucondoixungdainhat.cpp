#include<iostream>
#include<string.h>
#include<algorithm>
//xau con doi xung dai nhat
using namespace std;
int main()
{
	string S;
	getline(cin,S);
	int n=S.length();
	bool dapan[n+1][n+1]={false};
	for(int i=1;i<=n;i++)
	   dapan[i][i]=true;
	int ans=1;
	for(int len=2;len<=n;len++)
	   {
	   	 for(int i=1;i<=n-len+1;i++)
	   	   { 
			  int j=i+len-1;
	   	    if(len==2&&S[i-1]==S[j-1])
	   	        dapan[i][j]=true;
	   	    else
	   	      {
	   	      	if(S[i-1]==S[j-1]&&dapan[i+1][j-1]==true)
	   	      	    dapan[i][j]=true;
	   	      	else
	   	      	    dapan[i][j]=false;
	   	      }
	   	      if(dapan[i][j]==true)
	   	         ans=max(ans,len);
	   	    }
	   	}
    cout<<ans;
}
	   	      	

