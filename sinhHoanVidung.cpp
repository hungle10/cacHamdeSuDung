#include<iostream>
#include<algorithm>
using namespace std;
long long A[10000];
int ok;
long long n;
void khoiTao();
void sinh();
int main()
{
	ok=1;
	cin>>n;
	khoiTao();
    while(ok==1)
	  {
	  	for(long long i=1;i<=n;i++)
	  	    cout<<A[i]<<" ";
	  	cout<<endl;
	    sinh();
	  }
}
void khoiTao()
{
	for(long long i=1;i<=n;i++)
	   cin>>A[i];
    for(long long i=1;i<n;i++)
       for(long long j=i+1;j<=n;j++)
           if(A[i]>A[j])
               swap(A[i],A[j]);
}
void sinh()
{
	long long i=n-1;
	while(i>=1&&A[i]>A[i+1])
	    --i;
	if(i==0)
	   ok=0;
	else
	   {
	   	  long long j=n;  //tim thang lon hon A[i] tu i+1 toi n
	   	    while(A[j]<A[i])
                 --j;
			swap(A[i],A[j]);
			long long l=i+1;
			long long r=n;
		    while(l<r)	
			    { 
			     swap(A[l],A[r]);
				 ++l;
				--r;   
				}
		}
	}	  
	
