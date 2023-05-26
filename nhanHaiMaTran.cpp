#include<iostream>
#define SIZE 100
using namespace std;
void nhapMaTran(int A[][SIZE],int B[][SIZE],int n,int m,int n1,int m1);
void nhanMaTran(int A[][SIZE],int B[][SIZE],int C[][SIZE],int m,int n,int m1);
void xuat(int C[][SIZE],int n);
int main()
{
	int n,m;
	int n1,m1;
	cin>>m>>n; // hang cot A
	cin>>m1>>n1;  //hang cot B
	int A[SIZE][SIZE];
	int B[SIZE][SIZE];
	int C[SIZE][SIZE];
	if(n==m1)    // dieu kien de nhan ma tran VD 2x3 x 3x2 =2x2
	nhapMaTran(A,B,n,m,n1,m1);
	else
	cout<<"Khong the nhan hai ma tran nay";
    nhanMaTran(A,B,C,m,n,m1);
    xuat(C,m1);
}
void nhapMaTran(int A[][SIZE],int B[][SIZE],int n,int m,int n1,int m1)
{
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	      cin>>A[i][j];
	for(int i=0;i<m1;i++)
	   for(int j=0;j<n1;j++)
	       cin>>B[i][j];
}
void nhanMaTran(int A[][SIZE],int B[][SIZE],int C[][SIZE],int m,int n,int m1)
{
	for(int i=0;i<n;i++)
	   for(int j=0;j<m1;j++)
	       {
	       	 C[i][j]=0;
	       	 for(int k=0;k<m;k++)
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
