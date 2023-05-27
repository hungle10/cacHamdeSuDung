#include<iostream>
#define SIZE 100
using namespace std;
int A[SIZE];
int n;
int ok;
void sinh();
void khoiTao();
bool check();
int main()
{
	cin>>n;
	ok=1;
	khoiTao();
	while(ok==1)
	 {
	 	bool checkKQ=check();
	 	if(checkKQ==true)
	 	 {
		  for(int i=1;i<=n;i++)
	 	   cout<<A[i];
	 	cout<<endl;
	 	}
	 	sinh();
	}
}
void sinh()
{
	int i=n;
    while(i>=1&&A[i]==1)
	  { A[i]=0;
	   i--;	
	   }
	if(i==0)
	   ok=0;
	else 
	   A[i]=1;
}
void khoiTao()
{
   for(int i=1;i<=n;i++)
	   A[i]=0;
}
bool check()
{
	int dem=0;
	for(int i=1;i<=n;i++)
	   if(A[i]==0&&A[i+1]==1)
	      dem++;
	if(dem==2)
	return true;
	else 
	return false;
}
