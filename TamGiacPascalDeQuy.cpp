#include<iostream>
using namespace std;
int C(int k,int n);
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	  {
	   for(int k=0;k<=i;k++)
	     {
	     	cout<<C(k,i)<<" ";
	    }
	   cout<<endl;
	   }
	return 0;
}
int C(int k,int n)
{
	if(k==0||k==n)
		return 1;
	else
	    return C(k,n-1)+C(k-1,n-1);
}

