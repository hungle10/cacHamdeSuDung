#include<iostream>
#define SIZE 10000
using namespace std;
void nhapMang(long long A[SIZE],int &n);
int viTri(long long A[SIZE],int n,int x);
void themMang(long long A[SIZE],int &n,int vitri,int x);
void xuat(long long A[SIZE],int n);
void sapXep(long long A[SIZE],int n);
int main()
{
	long long A[SIZE];
	int n;
	int x;
	nhapMang(A,n);
	cin>>x;
	sapXep(A,n);
	int kq=viTri(A,n,x);
	themMang(A,n,kq,x);
	xuat(A,n);
}
void nhapMang(long long A[SIZE],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
	   cin>>A[i];
}
int viTri(long long A[SIZE],int n,int x)
{
	if(x>A[0])
	return 0;
	if(x<A[n-1])
     return n;
	for(int i=1;i<n-1;i++)
	   if(x>=A[i])
	      return i;
}	
void themMang(long long A[SIZE],int &n,int vitri,int x)
{
	for(int i=n-1;i>=vitri;i--)
	    A[i+1]=A[i];
	A[vitri]=x;
	n++;
}
void sapXep(long long A[SIZE],int n)
{
	for(int i=0;i<n;i++)
	   for(int j=i+1;j<n;j++)
	      if(A[i]<A[j])
	         {
	         	int temp=A[i];
	         	A[i]=A[j];
	         	A[j]=temp;
	          }
}
void xuat(long long A[SIZE],int n)
{
	for(int i=0;i<n;i++)
	 cout<<A[i]<<" ";
}

