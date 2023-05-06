#include<iostream>
#include<string.h>
#define SIZE 100
using namespace std;
char H[SIZE];
int P[SIZE];
bool dayNgoac();
void lietKeNhiPhan(int k);
void xuat();
int m,n;
int cnt;
int main()
{
	cnt=0;
    cin>>m>>n;
	lietKeNhiPhan(0);
}
bool dayNgoac()
{
	int dosau=0;
	int mongoac=0;
	for(int i=0;i<m;i++)
	   {
	   if(P[i]==0)
	      mongoac++;
	    else 
	        {
	        if(mongoac==0)
	           return false;
			if(mongoac>dosau)
	           dosau=mongoac;
	         mongoac--;
	       }
      	}
    if(mongoac==0&&dosau==n)
	return true;
	else 
	return false;
}
void lietKeNhiPhan(int k)
{
	if(k==m)
	   xuat();
	else
	   for(int i=0;i<=1;i++)
	    {
	       P[k]=i;
	       lietKeNhiPhan(k+1);
	    }
}
void xuat()
{
	if(dayNgoac()==true)
	   {
	    for(int i=0;i<m;i++)
	     {
		  if(P[i]==0)
	        cout<<"(";
	     else 
	       cout<<")";
	      }
	   cout<<endl;
	   }
}

	    

