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
        //if(check())
        //{
	 	for(int i=0;i<n;i++)
	 	  //if(A[i]==0)
	 	   cout<<A[i];
	 	   //else
	 	  // cout<<'B';
	 	cout<<endl;
        
	 	sinh();
	}
}
//}
void sinh()
{
	int i=n-1;
    while(i>=0&&A[i]==1)
	  {
	   A[i]=0;
	   i--;	
	   }
	if(i==-1)
	   ok=0;
	else 
	   A[i]=1;
}
void khoiTao()
{
   for(int i=0;i<n;i++)
	   A[i]=0;
}
bool check()
{
    for(int i=0;i<n;i++)
       if(A[i]==1&&A[i+1]==1)
          return false;
    return true;
}
