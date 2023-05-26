#include<iostream>
using namespace std;
void nhapMang(float A[][100],int m,int n);
void xuLy(float A[][100],int m,int n);
bool kiemTra(float A[][100],int i,int j,int m,int n);
// LOANG MA TRAN KIEM TRA DIEM LOI 
int main()
{
	int m,n;
	cin>>m>>n;
	float A[100][100];
	nhapMang(A,m,n);
	xuLy(A,m,n);
	return 0;
}
void nhapMang(float A[][100],int m,int n)
{
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	      cin>>A[i][j];
}
void xuLy(float A[][100],int m,int n)
{
	int min=INT_MAX;
	int tempA,tempB;
	bool check=false;
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	      if(kiemTra(A,i,j,m,n)==true)
	         {
	         	check=true;
	         	if(A[i][j]<min)
	         	  {
				    min=A[i][j];
				    tempA=i;
				    tempB=j;
				  }
	          }
   if(check==true)
     cout<<tempA<<" "<<tempB;
    else 
     cout<<-1;
}
bool kiemTra(float A[][100],int i,int j,int m,int n)
{
	int X[4]={0,-1,0,1};
	int Y[4]={-1,0,1,0};
	for(int k=0;k<4;k++)
	   if((X[k]+i>=0)&&(Y[k]+j>=0)&&(X[k]+i<m)&&(Y[k]+i<n))
	       if(A[i][j]<=A[X[k]+i][Y[k]+j])
	           return false;
	return true;
}
