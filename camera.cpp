#include<iostream>
#define SIZE 200
using namespace std;
void nhapToaDoCamera(int A[][SIZE],int x);
void xuLy(int A[][SIZE],int m,int n);
void nhungOquanSat(int A[][SIZE],int x,int y,int m,int n);
int soViTri(int A[][SIZE],int m,int n);
int main()
{
	int A[SIZE][SIZE]={0};
	int m,n,x;
	cin>>m>>n>>x;
	nhapToaDoCamera(A,x);
    xuLy(A,m,n);
    int kq=soViTri(A,m,n);
    cout<<kq;
}
void nhapToaDoCamera(int A[][SIZE],int x)
{
	int hang,cot;
	for(int i=0;i<x;i++)
	  {
	   cin>>hang>>cot;        //toa do camera
	   A[hang][cot]=2;
	   }        
}
void xuLy(int A[][SIZE],int m,int n)
{
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	      if(A[i][j]==2)
	         nhungOquanSat(A,i,j,m,n);
}
void nhungOquanSat(int A[][SIZE],int x,int y,int m,int n)
{
	int X[13]={-2,-1,-1,-1,0,0,0,0,0,1,1,1,2};
	int Y[13]={0,-1,0,1,-2,-1,0,1,2,-1,0,1,0};
	for(int i=0;i<13;i++)
	 { 
	    if((x+X[i]>=0&&x+X[i]<m)&&(y+Y[i]>=0&&y+Y[i]<n))
           A[x+X[i]][y+Y[i]]=1;
	 }
}
int soViTri(int A[][SIZE],int m,int n)
{
	int cnt=0;
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	      if(A[i][j]==1)
	        cnt++;
	return cnt;
}
