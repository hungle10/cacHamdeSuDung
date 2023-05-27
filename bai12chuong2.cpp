#include<iostream>
#define SIZE 100
using namespace std;
void nhap(int A[][SIZE],int &m);
void xuat(int A[][SIZE],int m);
void xuLy(int A[][SIZE],int i,int j);
void demMin(int A[][SIZE],int m);
void chuyenGiaTri(int A[][SIZE],int m);
int main()
{
	int A[SIZE][SIZE]={0};
	int m;
	nhap(A,m);
	chuyenGiaTri(A,m);
	demMin(A,m);
	xuat(A,m);
}
void nhap(int A[][SIZE],int &m)
{
	cin>>m;
	for(int i=1;i<=m;i++)
	   for(int j=1;j<=m;j++)
	       cin>>A[i][j];
}
void chuyenGiaTri(int A[][SIZE],int m)
{
	for(int i=1;i<=m;i++)
	   for(int j=1;j<=m;j++)
	       if(A[i][j]==1)
	           A[i][j]=-1;
}
void demMin(int A[][SIZE],int m)
{
	for(int i=1;i<=m;i++)
	    for(int j=1;j<=m;j++)
	       if(A[i][j]==0)
	           xuLy(A,i,j);
	        
}
void xuLy(int A[][SIZE],int i,int j)
{
	int X[8]={-1,0,1,0,-1,-1,1,1};
	int Y[8]={0,1,0,-1,-1,1,1,-1};
	for(int k=0;k<8;k++)
	   if(A[i+X[k]][j+Y[k]]==-1)
	      A[i][j]++;
}
void xuat(int A[][SIZE],int m)
{
	for(int i=1;i<=m;i++)
	   {for(int j=1;j<=m;j++)
	      cout<<A[i][j]<<" ";
	    cout<<endl;
	    }
}
