#include<iostream>
#define SIZE 100
using namespace std;
void nhapMang(int A[][SIZE],int &m,int &n);
bool laDiemLoi(int A[][SIZE],int i,int j);
int timMin(int A[],int nA);
int timMinLoi(int A[][SIZE],int m,int n);
void xuatMang(int A[][SIZE],int m,int n);
int timMin(int A[],int nA);
int timViTriMin(int A[][SIZE],int C[],int D[],int m,int n );
int main()
{
   int A[SIZE][SIZE]={0};
   int D[10000];
   int C[10000];
   int m,n;
   nhapMang(A,m,n);
   int vitri=timViTriMin(A,C,D,m,n);
   if(vitri==-1)
     cout<<vitri;
   else
     cout<<D[vitri]-1<<" "<<C[vitri]-1;
}
void nhapMang(int A[][SIZE],int &m,int &n)
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	  for(int j=1;j<=n;j++)
	     cin>>A[i][j];
}
bool laDiemLoi(int A[][SIZE],int i,int j)
{
	int X[4]={0,0,1,-1};
	int Y[4]={-1,1,0,0};
	for(int k=0;k<4;k++)
	    if(A[i][j]<=A[i+X[k]][j+Y[k]])
	       return false;
	return true;
}
int timMinLoi(int A[][SIZE],int m,int n)
{
	int B[10000];
	int min=10000,nB=0;
	for(int i=1;i<=m;i++)
	   for(int j=1;j<=n;j++)
	      if(laDiemLoi(A,i,j))
	            B[nB++]=A[i][j];
	min=timMin(B,nB);
	return min;
}
int timViTriMin(int A[][SIZE],int C[],int D[],int m,int n )
{
    int B[10000];
    int nB=0;
    int dem=0;
    int vitri;
	for(int i=1;i<=m;i++)
	   for(int j=1;j<=n;j++)
	      if(laDiemLoi(A,i,j))
	           {
			    B[nB]=A[i][j];
	            D[nB]=i;
	            C[nB]=j;
	            nB++;
	            dem++;
	            }
	if (dem!=0)
      vitri=timMin(B,nB);
    else  
       return vitri=-1;
	return vitri;
}

int timMin(int A[],int nA)
{
	int temp=0;
   int min=A[0];
   for(int i=1;i<nA;i++)
       if(A[i]<min)
	     { min=A[i];
	       temp=i;
	    }
	return temp;
}       
/*void xuatMang(int A[][SIZE],int m,int n)
{
	for(int i=0;i<=m+1;i++)
	   {
	    for(int j=0;j<=n+1;j++)
	      cout<<A[i][j];
	      cout<<endl;
	    }
}*/
