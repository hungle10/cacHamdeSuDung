#include<iostream>
#include<string.h>
#define SIZE 100
using namespace std;
void tinhTich(char A[],char B[],char C[]);
void xuat(char C[]);
int main()
{
   char A[SIZE];
   char B[SIZE];
   char C[SIZE*SIZE];
   cin>>A>>B;
   tinhTich(A,B,C);
   xuat(C);
}
void tinhTich(char A[],char B[],char C[])
{
	strrev(A);
	strrev(B);
	int iA,iB;
	for(int i=0;i<strlen(A)+strlen(B);i++)
	   C[i]='0';
	for(iB=0;iB<strlen(B);iB++)
	   {
	   	   int nho=0;
	   	   for(iA=0;iA<strlen(A);iA++)
	   	       {
				  int x=(B[iB]-'0')*(A[iA]-'0')+nho+(C[iA+iB]-'0');
	   	          C[iA+iB]=x%10+'0';
	   	          nho=x/10;
	   	        }
	   	        if(nho>0)
	   	        C[iA+iB]=nho+'0';
	   	}
	if(C[iA+iB-1]!='0')
	   C[iA+iB]='\0';
	else 
	   C[iA+iB-1]='\0';
	strrev(C);
	}
void xuat(char C[])
{
	for(int i=0;i<strlen(C);i++)
	    cout<<C[i];
}
