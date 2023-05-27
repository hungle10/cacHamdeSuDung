//LIET KE TAT CA TAP CON CUA TAP N PHAN TU 
#include<iostream>
using namespace std;
int B[100];
int n,k;
void xuat(int B[]);
void lietKe(int i);
int main()
{
	cin>>n;
	cin>>k;
    B[0]=0;
    lietKe(1);
}
void xuat()
{
	for(int i=1;i<=k;i++)
	   cout<<B[i];
	cout<<endl;
}
void lietKe(int i)
{
	for(int j=B[i-1]+1;j<=(n-k+i);j++)
	{
	    B[i]=j;
	if(i==k)
	  xuat();
    else 
        lietKe(i+1);
    }
}

