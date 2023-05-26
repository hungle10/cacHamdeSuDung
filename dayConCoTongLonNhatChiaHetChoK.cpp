//TIM DAY CON CO TONG CAC PHAN TU CHIA HET CHO K 
//VA DAT GIA TRI LON NHAT
//  SU DUNG QUAY LUI DUYET TAT CA CAC TRUONG HOP 

#include<iostream>
using namespace std;
void nhapMang(int A[],int &n,int &k);
void duyet(int start,int end,long long maxTam,long long &maxKQ,int A[],int k);
int main()
{
	int A[26];
	int n;
	int k;
	nhapMang(A,n,k);
	long long maxKQ=INT_MIN; 
    duyet(0,n,0,maxKQ,A,k);
    cout<<maxKQ;
}
void nhapMang(int A[],int &n,int &k)
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
	   cin>>A[i];
}
void duyet(int start,int end,long long maxTam,long long &maxKQ,int A[],int k)
{
	if(maxTam>=maxKQ&&maxTam%k==0)
	  	maxKQ=maxTam;
	for(int i=start;i<end;i++)
	  duyet(i+1,end,maxTam+A[i],maxKQ,A,k);
}
