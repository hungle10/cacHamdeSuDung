#include<iostream>
#include<math.h>
using namespace std;
string row;
void nhapMang(int A[][50],int n);
void timMaxNhiPhan(int A[][50],int n,int KQ[]);
void duongCheoChinh(int A[][50],int KQ[],int &k,int n,long long &min);
void duongCheoPhu(int A[][50],int KQ[],int &k,int n,long long &min);
int main()
{
    getline(cin, row);
    int n=row.length();
	int A[50][50];
    int KQ[50*50];
    nhapMang(A,n);
    timMaxNhiPhan(A,n,KQ);
}
void nhapMang(int A[][50],int n)
{
    int k=0;
	for(int j=0;j<n;j++)
	    {
         A[0][j]=row[k++]-'0';
         }
    for(int i=1;i<n;i++)
    {  
        k=0;
       row.erase(0,n-1);
       getline(cin,row);
       for(int j=0;j<n;j++)
           A[i][j]=row[k++]-'0';
    }
}
void timMaxNhiPhan(int A[][50],int n,int KQ[])
{
	long long min=INT_MAX;
	int k=0;
	long long so;
	for(int i=0;i<n;i++) 
	{   
	  so=0;
	  int tam=n-1;
	   for(int j=0;j<n;j++)
	   {
	   so=so+A[i][j]*pow(2,tam);
	   tam--;
	    }
	    if(so<min)
	      {
	      	int hang=i;
		    min=so;
		       for(int j=0;j<n;j++)
		          KQ[k++]=A[hang][j];
	       }
	}
	k=0;
	for(int j=0;j<n;j++)
	{
		so=0;
		int tam=n-1;
	    for(int i=0;i<n;i++)
	        {
	           so=so+A[i][j]*pow(2,tam);
		        tam--;
		    }
		if(so<min)
	           {
	            	int cot=j;
		            min=so;
		                for(int i=0;i<n;i++)
		                   KQ[k++]=A[i][cot];
		        }
	}
	k=0;
    duongCheoChinh(A,KQ,k,n,min);
    duongCheoPhu(A,KQ,k,n,min);
    for(int i=0;i<n;i++)
      cout<<KQ[i];
}
void duongCheoChinh(int A[][50],int KQ[],int &k,int n,long long &min)
{
	long long so=0;
	int tam=n-1;
	for(int i=0;i<n;i++) 
	{   
	   so=so+A[i][i]*pow(2,tam);
	   tam--;
	}
	 if(so<min)
	      {
		     min=so;
		      for(int i=0;i<n;i++)
		                   KQ[k++]=A[i][i];
		            k=0;
		  }
	k=0;
}
void duongCheoPhu(int A[][50],int KQ[],int &k,int n,long long &min)
{
	long long so=0;
	 int tam=n-1;
    for(int i=0;i<n;i++) 
	{   
	   so=so+A[i][n-i-1]*pow(2,tam);
	   tam--;
	}
	 if(so<min)
	      {
		    min=so;
		    for(int i=0;i<n;i++)
		           KQ[k++]=A[i][n-i-1];
		    k=0;
		  }
    k=0;
}
	

