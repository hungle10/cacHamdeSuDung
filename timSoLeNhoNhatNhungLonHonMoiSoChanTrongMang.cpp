#include<iostream>
using namespace std;
int A[100];
int n;
void nhapMang();
void sapXepSoLe();
int xuLy();
int main()
{
   nhapMang();
   sapXepSoLe();
   int kq=xuLy();
   cout<<kq;
}
void nhapMang()
{
	cin>>n;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
int xuLy()
{
	int max;
	for(int i=0;i<n;i++)
	    if(A[i]%2==0)
	      {
		    max=A[i];
	       break;
	      }
	for(int i=0;i<n;i++)
	     if(A[i]%2==0&&A[i]>max)
	         max=A[i];
	for(int i=0;i<n;i++)
	   if(A[i]%2!=0&&A[i]>max)
	        return A[i];
}
void sapXepSoLe()
{
 	for(int i=0;i<n-1;i++)
	   if(A[i]%2!=0)
	      for(int j=i+1;j<n;j++)
	          if(A[j]%2!=0&&A[i]>A[j])
	              {
	              	int temp=A[i];
	              	A[i]=A[j];
	              	A[j]=temp;
	         }
}

