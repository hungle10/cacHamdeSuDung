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
        if(check())
        {
	 	for(int i=1;i<=n;i++)
	 	  if(A[i]==0)
	 	   cout<<'A';
	 	   else
	 	   cout<<'B';
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
    for(int i=1;i<=n;i++)
       if(A[i]==1&&A[i+1]==1)
          return false;
    return true;
}
