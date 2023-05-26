#include<iostream>
#define SIZE 100
using namespace std;
void nhapMaTran(int A[][SIZE],int B[][SIZE],int n);
void nhanMaTran(int A[][SIZE],int B[][SIZE],int C[][SIZE],int n);
void xuat(int C[][SIZE],int n);
int main()
{
	int n;
	cin>>n;
	int A[SIZE][SIZE];
	int B[SIZE][SIZE];
	int C[SIZE][SIZE];
	nhapMaTran(A,B,n);
    nhanMaTran(A,B,C,n);
    xuat(C,n);
}
void nhapMaTran(int A[][SIZE],int B[][SIZE],int n)
{
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++)
	      cin>>A[i][j];
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++)
	       cin>>B[i][j];
}
void nhanMaTran(int A[][SIZE],int B[][SIZE],int C[][SIZE],int n)
{
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++)
	       {
	       	 C[i][j]=0;
	       	 for(int k=0;k<n;k++)
	       	     C[i][j]=C[i][j]+A[i][k]*B[k][j];
	       }
}
void xuat(int C[][SIZE],int n)
{
	for(int i=0;i<n;i++)
	  {
	    for(int j=0;j<n;j++)
	       cout<<C[i][j]<<" ";
	    cout<<endl;
	   }
}
