#include<iostream>
#define SIZE 100
using namespace std;
int A[SIZE][SIZE];
int m,n;
void nhapMang();
bool laMaxDong(int x,int y);
bool laMinCot(int x,int y);
void xuat();
int main()
{
	nhapMang();
	xuat();
}
void nhapMang()
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	      cin>>A[i][j];
}
bool laMaxDong(int x,int y)
{
	for(int i=0;i<m;i++)
	   if(A[i][y]>A[x][y])
	      return false;
	return true;
}
bool laMinCot(int x,int y)
{
	for(int j=0;j<n;j++)
	   if(A[x][j]<A[x][y])
	       return false;
	return true;
}
void xuat()
{
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	       if(laMaxDong(i,j)==true&&laMinCot(i,j)==true)
	           cout<<A[i][j];
}
