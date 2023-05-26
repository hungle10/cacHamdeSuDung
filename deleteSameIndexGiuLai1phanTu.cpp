#include<iostream>
using namespace std;
void nhapMang(int A[],int &n);
void xuLy(int A[],int n,int B[],int &nB);
bool checkXuatHien(int B[],int nB,int x);
void xuat(int B[],int nB);
int main()
{
	int A[100000];
	int B[100000];
	int n,nB;
	nhapMang(A,n);
	xuLy(A,n,B,nB);
	xuat(B,nB);
}
void nhapMang(int A[],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
	   cin>>A[i];
}
void xuLy(int A[],int n,int B[],int &nB)
{
	nB=0;
	for(int i=0;i<n;i++)
	   if(checkXuatHien(B,nB,A[i])==true)
	      B[nB++]=A[i];
}
bool checkXuatHien(int B[],int nB,int x)
{
	for(int i=0;i<nB;i++)
	   if(B[i]==x)
	       return false;
	return true;
}
void xuat(int B[],int nB)
{
	for(int i=0;i<nB;i++)
	   cout<<B[i]<<" ";
}
