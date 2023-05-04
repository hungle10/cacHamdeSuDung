#include<iostream>
using namespace std;
int n;
void haNoi(int n,char nguon,char dich,char tam);
int main()
{
	cin>>n;
	char nguon='N';
	char dich='D';
	char tam='T';
	haNoi(n,nguon,dich,tam);
	
}
void haNoi(int n,char nguon,char dich,char tam)
{
	if(n>0)
	   {
	   	  haNoi(n-1,nguon,tam,dich);
	      cout<<"Chuyen dia thu"<<n<<"tu cot"<<nguon<<"den cot"<<dich<<endl;
	      haNoi(n-1,dich,tam,nguon);
	    }
}

