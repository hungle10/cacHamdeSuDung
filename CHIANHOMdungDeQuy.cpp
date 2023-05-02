#include<iostream>
#include<math.h>
using namespace std;
int array[20];
int sum;
int Hmin=INT_MAX;
void nhapMang(int n);
void duyet(int start,int end,long long max_so);
void tinhSum(int n);
void xuat(int n);
int main()
{
   int n;
   cin>>n;
   sum=0;	
	nhapMang(n);
	tinhSum(n);
    duyet(0,n,0);
    cout<<Hmin;
}
void nhapMang(int n)
{
	for(int i=0;i<n;i++)
	   cin>>array[i];
}
void tinhSum(int n)
{
	for(int i=0;i<n;i++)
	  sum=sum+array[i];
}
void duyet(int start,int end,long long max_so)
{
	if(start==end)
	{
		int tongA=abs(sum-max_so);
		int tongB=abs(max_so-tongA);
		Hmin=min(tongB,Hmin);
	}
	for(int i=start;i<end;i++)
	   duyet(i+1,end,max_so+array[i]);
}