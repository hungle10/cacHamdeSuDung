#include<iostream>
using namespace std;

void nhapMang(int A[],int &n,int &w);
void taoBang(int A[],int n,int w);
void truyVet(int A[],int n,int w);
int F[51][10000];
bool dapan[51]={false};

int main()
{
 int A[51];
 int n;
 int w;
 nhapMang(A,n,w);
 taoBang(A,n,w);  //quy hoach dong 
 truyVet(A,n,w);
     for(int i=1;i<=n;i++)
      {
        if(dapan[i]==true)
            cout<<A[i]<<" ";
      }
}
void nhapMang(int A[],int &n,int &w)
{
 cin>>n>>w;
 for(int i=1;i<=n;i++)
    cin>>A[i];
}
void taoBang(int A[],int n,int w)
{
 for(int v=1;v<=w;v++)
   {
   if(v>=A[1])
       F[1][v]=A[1];
    else
       F[1][v]=0;
   }
 for(int k=2;k<=n;k++)
    {
      for(int v=1;v<=w;v++)
         {
            if(v>=A[k])
               F[k][v]=max(F[k-1][v-A[k]]+A[k],F[k-1][v]);
            else
               F[k][v]=F[k-1][v];
         }
    }
}
void truyVet(int A[],int n,int w)
{
 int v=w;
    while(v>0)
    {
     for(int k=n;k>=1;k--)
        {
            if(F[k][v]>F[k-1][v])
              {
                dapan[k]=true;
                v=F[k][v]-A[k];
                break;
              }
       }
     }
}
