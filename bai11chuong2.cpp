#include<iostream>
#include<string.h>
#define SIZE 100
using namespace std;
void tinhTong(char S1[],char S2[],char S[]);
void chuanHoa(char S1[],char S2[]);
void chen(char S[],int k);
void tinhHieu(char S1[],char S2[],char S[]);
void tinhTruSoLonChoSoNho(char S1[],char S2[],char S[]);
void chuanHoaHieu(char A[]);
void xoaKiTu(char A[],int vitrixoa);
int main()
{
	char S1[SIZE],S2[SIZE],A[SIZE],B[SIZE];
	gets(S1);
	gets(S2);
	chuanHoa(S1,S2);
	tinhTong(S1,S2,A);
    tinhHieu(S1,S2,B);
	puts(A);
	chuanHoaHieu(B);
	puts(B);
}
void chuanHoa(char S1[],char S2[])
{
	int l1=strlen(S1);
	int l2=strlen(S2);
	if(l1>l2)
	{
		chen(S2,l1-l2);
	}
	else
		chen(S1,l2-l1);
}
void chen(char S[],int k)
{
	strrev(S);
	int l=strlen(S);
	for(int i=0;i<k;i++)
	   S[l+i]='0';
	S[l+k]='\0';
	strrev(S);
}
void tinhTong(char S1[],char S2[],char S[])
{
	strrev(S1);
	strrev(S2);
	int l=strlen(S1);
	int nho=0;
	for(int i=0;i<l;i++)
	    {
	    	int t=(S1[i]-'0')+(S2[i]-'0')+nho;
	    	if(t<10)
	    	   {
	    	   	   S[i]=t+'0';
	    	   	   nho=0;
	    	    }
	    	else
	    	  {
	    	  	S[i]=t-10+'0';
	    	  	nho=1;
	    	   }
	    }
	if(nho==1)
	   S[l++]='1';
	S[l]='\0';
	strrev(S);
	strrev(S1);
	strrev(S2);
}
void tinhHieu(char S1[],char S2[],char S[])
{
	if (strcmp(S1,S2)>=0)
	   tinhTruSoLonChoSoNho(S1,S2,S);
	else
	    {
		tinhTruSoLonChoSoNho(S2,S1,S);
	    int l=strlen(S);
	    strrev(S);
	    S[l]='-';
	    S[l+1]='\0';
	    strrev(S);
	    }
}
	    
void tinhTruSoLonChoSoNho(char S1[],char S2[],char S[])
{
	strrev(S1);
	strrev(S2);
	int l=strlen(S1);
	int nho=0;
	for(int i=0;i<l;i++)
	    {
	    	int t=(S1[i]-'0')-(S2[i]-'0')-nho;
	    	if(t<0)
	    	   {
	    	   	   S[i]=t+10+'0';
	    	   	   nho=1;
	    	    }
	    	else
	    	  {
	    	  	S[i]=t+'0';
	    	  	nho=0;
	    	   }
	    }
	S[l]='\0';
	strrev(S);
}
void chuanHoaHieu(char A[])
{     
     while(A[0]=='0')
	      xoaKiTu(A,0);
}
void xoaKiTu(char A[],int vitrixoa)
{
	 int n=strlen(A);
   for(int i=vitrixoa;i<n-1;i++)
      A[i]=A[i+1];
	 A[strlen(A)-1]='\0';
}
	
