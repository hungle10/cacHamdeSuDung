#include<iostream>
#include<string.h>
using namespace std;
void inHoachuCaiDau(char A[]);
void xoaKiTuTrangThua(char A[]);
void xoaKiTu(char S[],int vitrixoa);
void xuat(char A[]);
int main()
{
   char A[50];
   	gets(A);
   	xoaKiTuTrangThua(A);
   	inHoachuCaiDau(A);
   	xuat(A);
}
void inHoachuCaiDau(char A[])
{
	if(A[0]>=97&&A[0]<=122)
	    A[0]=A[0]-32;
	for(int i=1;i<strlen(A);i++)
	   if(A[i]>='A'&&A[i]<='Z')
	      A[i]=A[i]+32;
}
void xoaKiTuTrangThua(char A[])
{
	while(A[0]==' ')
       xoaKiTu(A,0);
	for( int i=1;i<strlen(A);i++)
	   if(A[i]==' '&&A[i-1]==' ')
	      {xoaKiTu(A,i-1);
	      i--;
	      }
}
void xoaKiTu(char S[],int vitrixoa)
{
   int n=strlen(S);
   for(int i=vitrixoa;i<n-1;i++)
      S[i]=S[i+1];
	 S[strlen(S)-1]='\0';
}	
void xuat(char A[])
{
	int nA=strlen(A);
	for(int i=0;i<nA;i++)
	   cout<<A[i];
}
