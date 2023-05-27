#include<iostream>
using namespace std;
void nhapMang(int A[],int &n,int &x);
int binarySearch(int A[],int n,int x);
int main()
{
	int A[1000];
	int n;
	int x;
	nhapMang(A,n,x);
	int vitri=binarySearch(A,n,x);
	cout<<vitri;
}
void nhapMang(int A[],int &n,int &x)
{
	cin>>n>>x;
	for(int i=0;i<n;i++)
	    cin>>A[i];
}
int binarySearch(int A[],int n,int x)
{
	int left=0;
	int right=n-1;
	int mid;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(A[mid]==x)
		  return mid;
		else if(A[mid]>x)
		   right=mid-1;
		else if(A[mid]<x)
		   left=mid+1;
	}
	return -1;
}
