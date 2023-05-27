#include<iostream>
#include<string.h>
using namespace std;
void chuyen10sang2(int n,char KQ[]);
void chuyen10sang8(int n,char KQ[]);
void chuyen10sang16(int n,char KQ[]);
void xuat(char KQ[]);
int main()
{
	int n;
	char KQ[50];
	char KQ1[50];
	char KQ2[50];
	cin>>n;
	chuyen10sang2(n,KQ);
	xuat(KQ);
	chuyen10sang8(n,KQ1);
	xuat(KQ1);
	chuyen10sang16(n,KQ2);
	xuat(KQ2);
	return 0;
}
void chuyen10sang2(int n,char KQ[])
{
	int d=0;
	while(n>0)
	{
	int x=n%2;
	n=n/2;
	if(x<10)
	   KQ[d]=x+'0';
	else
	    KQ[d]=x-10+'A';
	d++;
	}
	KQ[d]='\0';
	strrev(KQ);
}
void chuyen10sang8(int n,char KQ[])
{
	int d=0;
	while(n>0)
	{
		int x=n%8;
		n=n/8;
	    if(x<10)
	       KQ[d]=x+'0';
	    else 
	       KQ[d]=x-10+'A';
	d++;
	}
	KQ[d]='\0';
	strrev(KQ);
}
void chuyen10sang16(int n,char KQ[])
{
	int d=0;
	while(n>0)
	{
		int x=n%16;
		n=n/16;
		if(x<10)
		   KQ[d]=x+'0';
		else 
		   KQ[d]=x-10+'A';
		d++;
	}
	KQ[d]='\0';
	strrev(KQ);
}
void xuat(char KQ[])
{
	for(int i=0;i<strlen(KQ);i++)
	   cout<<KQ[i];
	cout<<endl;
}
