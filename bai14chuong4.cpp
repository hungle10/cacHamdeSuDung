#include<iostream>
#define SIZE 100
int A[SIZE][SIZE]={0};
int n=6;
int dem=0;
int X[8]={-2,-2,-1,1,2,2,1,-1};
int Y[8]={-1,1,2,2,1,-1,-2,-2};
void maDiTuan(int x,int y);
void xuat();
using namespace std;
int main()
{
    maDiTuan(2,3);
    xuat();
}
void maDiTuan(int x,int y)
{
	dem++;
	A[x][y]=dem;
	if(dem==n*n)
	{
		xuat();
	    exit(0);
	}
	for(int i=0;i<8;i++)
	   {
	   	   int xx=x+X[i];
	   	   int yy=y+Y[i];
	   	   if(xx>=0&&xx<n&&yy>=0&&yy<n&&A[xx][yy]==0)
	   	      maDiTuan(xx,yy);
	   	}
	dem--;
	A[x][y]=0;
}
void xuat()
{
	for(int i=0;i<n;i++)
	   {
	   for(int j=0;j<n;j++)
	       cout<<A[i][j]<<" ";
	    cout<<endl;
	    }
}
