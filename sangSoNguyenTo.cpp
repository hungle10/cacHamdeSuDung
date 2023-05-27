//xuat ra tat ca cac so nguyen to nho hon n theo luat sang Eratosthene

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int check[n+1];
	for(int i=0;i<=n;i++)
	    check[i]=1;
	check[0]=check[1]=0;
	for(int i=2;i<=sqrt(n);i++)
	   {
	      if(check[i]==1)
	        {
			   for(int j=i*i;j<=n;j=j+i)
	                check[j]=0;
	        }
	    }
    for(int i=0;i<=n;i++)
	    if(check[i]==1)
	        cout<<i;
}
