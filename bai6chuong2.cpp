#include<iostream>
#define SIZE 100
using namespace std;
void nhapMang(int A[],int B[],int &nA);
void ghepMang(int A[],int B[],int C[],int nA,int &nC);
void xuatMang(int C[],int nC);
int main()
{
	int A[SIZE],B[SIZE];
	int C[SIZE*SIZE];
	int nA,nC;
	nhapMang(A,B,nA);
	ghepMang(A,B,C,nA,nC);
	xuatMang(C,nC);
}
void nhapMang(int A[],int B[],int &nA)
{
	cin>>nA;
	for(int i=0;i<nA;i++)
	   cin>>A[i];
	for(int j=0;j<nA;j++)
	   cin>>B[j];
}
void ghepMang(int A[],int B[],int C[],int nA,int &nC)
{
	int iA=0;
	int iB=0;
	nC=0;
	while(iA<nA&&iB<nA)
	{
		C[nC++]=A[iA++];
		C[nC++]=B[iB++];
	}
	while(iA<nA)
	   C[nC++]=A[iA++];
	while(iB<nA)
	   C[nC++]=B[iB++];
}
void xuatMang(int C[],int nC)
{
	for(int i=0;i<nC;i++)
	   cout<<C[i]<<" ";
}
