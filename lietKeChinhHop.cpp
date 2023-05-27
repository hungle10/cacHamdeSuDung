#include<iostream>
using namespace std;
#define SIZE 200
int A[SIZE],C[SIZE]={0};
int n,k,dem;
void xuatMang(int A[],int n);
void chinhHop(int i);
int main()
{
	cin>>k>>n;   //k>=n
	dem=0;
	chinhHop(1);
	cout<<dem;
}
void chinhHop(int i)
{
	for(int j=1;j<=n;j++)
	     {
	     	if(C[j]==0)
	     	 {
	     	 	A[i]=j;
	     	 	if(i==k)
	     	 	   {dem++;
	     	 	   xuatMang(A,k);
	     	 	   }
	     	 	else 
	     	 	  {
	     	 	  	C[j]=1;
	     	 	  	chinhHop(i+1);
	     	 	  	C[j]=0;
	     	 	   }
			}
		}
}
void xuatMang(int A[],int n)
{
	for(int i=1;i<=n;i++)
	   cout<<A[i]<<" ";
	cout<<endl;
}
