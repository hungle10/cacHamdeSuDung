//TU DO HANH PHUC -> UT OD HNAH CUHP

#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;
void daoNguoc(char S[],int start,int end);
int main()
{
	char S[100000];
	gets(S);
	fflush(stdin);
	int n=strlen(S);
	int i=0;
	int start=0;
	int end=n-1;
	while(i<n)
	{ 
	   if(S[i]==' ')
	      {
		    end=i;
		    daoNguoc(S,start,end-1);
		    start=end+1;
		   }
		if(i==n-1)
			daoNguoc(S,start,n-1);
	   i++;
	}
	for(int i=0;i<n;i++)
	  cout<<S[i];
}
void daoNguoc(char S[],int start,int end)
{
	while(start<end)
	{
		char temp=S[start];
		S[start]=S[end];
		S[end]=temp;
		start++;
		end--;
    }
}

