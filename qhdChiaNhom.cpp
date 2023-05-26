//PHAN CAC PHAN TU VAO 2 NHOM A VA B SAO CHO CHENH LECH 
//TONG CAC GIA TRI PHAN TU MOI NHOM LA NHO NHAT

#include<iostream>
#include<math.h>
using namespace std;
void nhapMang(int A[],int &n,int &w);
void taoBang(int A[],int n,int w);
void truyVet(int A[],int n,int w);
int F[21][10000];  //bang phuong an F[n][10000] n tuy vao de bai
bool dapan[21]={false};// su dung luc truy vet , true se la phan tu phan vao nhom A

int main()
{
	int A[21];
	int n,w;
	nhapMang(A,n,w);
    int tongMang=0;
	for(int i=1;i<=n;i++)
	    tongMang=tongMang+A[i];
	taoBang(A,n,w);
    truyVet(A,n,w);
    int sum1=0;
     for(int i=1;i<=n;i++)
      {
      	 if(dapan[i]==true)
      	    sum1=sum1+A[i];   //Phan cac phan tu vao nhom A 
	  }
	int sum2=tongMang-sum1;  //Phan tu cua nhom B
	int kq=abs(sum1-sum2);
	cout<<kq;
}
void nhapMang(int A[],int &n,int &w)
{
	w=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	   cin>>A[i];
	for(int i=1;i<=n;i++)
	  w=w+A[i];
	w=w/2;   
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

