#include<iostream>
using namespace std;
void nhapMang(int A[][100],int m,int n);
bool kiemTra(int A[][100],int i,int j,int m,int n);
void xuLy(int A[][100],int m,int n);
int main()
{
    int A[100][100];
    int m,n;
    cin>>m>>n;
    nhapMang(A,m,n);
    xuLy(A,m,n);
}
void nhapMang(int A[][100],int m,int n)
{
    for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
          cin>>A[i][j];
}
bool kiemTra(int A[][100],int i,int j,int m,int n)
{
    int X[4]={-1,0,1,0};
    int Y[4]={0,1,0,-1};
    for(int k=0;k<4;k++)
       if((i+X[k]>=0&&i+X[k]<m)&&(j+Y[k]>=0&&j+Y[k]<n))
          {
              if(A[i][j]>=A[X[k]+i][Y[k]+j])
                 return false;
          }
    return true;
}
void xuLy(int A[][100],int m,int n)
{
    bool check=false;
    int max=INT_MIN;
    int temp1,temp2;
    for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
          if(kiemTra(A,i,j,m,n))
             {
                 check=true;
                 if(A[i][j]>max)
                    {
                        temp1=i;
                        temp2=j;
                        max=A[i][j];
                    }
             }
    if(check==true)
    cout<<temp1<<" "<<temp2;
    else
    cout<<-1;
}
