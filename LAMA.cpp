#include<iostream>
#include<string.h>
using namespace std;
int giaTri(char A[],int n);
int main()
{
   char A[11];
   gets(A);
   int n=strlen(A);
   int kq=giaTri(A,n);
   cout<<kq;
}
int giaTri(char A[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	   {
	   	  if(A[i]=='V')
	   	     dem=dem+5;
	   	   if(A[i]=='L')
	   	      dem=dem+50;
	   	   if(A[i]=='C')
	   	      dem=dem+100;
	   	    if(A[i]=='I')
	   	        if(A[i+1]=='V'||A[i+1]=='X')
	   	          dem=dem-1;
	   	        else
	   	          dem=dem+1;
	   	    if(A[i]=='X')
	   	        if(A[i+1]=='L'||A[i+1]=='C')
	   	           dem=dem-10;
	   	        else 
	   	           dem=dem+10;
	   	}
	return dem;
}
	   	     
