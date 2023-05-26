#include<iostream>
using namespace std;
void batBit(int &n,int i);
void tatBit(int &n,int i);
int layBit(int n,int i);
int main()
{
	int n,i;
	cin>>n;
	cin>>i;
	batBit(n,i);
	int kq=layBit(n,i);
	tatBit(n,i);
	cout<<kq;
}
void batBit(int &n,int i)
{
	n=n|(0x1<<i);
}
void tatBit(int &n,int i)
{
	n=n&(~(0x1<<i));
}
int layBit(int n,int i)
{
	return (n>>i)&0x1;
}
