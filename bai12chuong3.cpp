//1  +  (1 +2)+  (1 +2 +3)+   ...   +  (1 +2 +3 +...+n)
//n * (n + 1) * (n + 2) / 6;
#include<iostream>
#include<string.h>
#define SIZE 100
using namespace std;
void chen(char S[],int k);
void chuanHoa(char S1[],char S2[]);
void tinhTong(char S1[],char S2[],char S[]);
void tinhTich(char A[],char B[],char C[]);
string divide(char dividend[], int divisor);
void xuat(char C[]);
int main()
{
   char n[SIZE];
   gets(n);
   char mot[2]={'1'};
   char hai[2]={'2'};
   char sau[2]={'6'};
   char nCong1[SIZE];
   char nCong2[SIZE];
   char tichNvsNcong1[SIZE*SIZE];
   char tichPhanTu[SIZE*SIZE];
   chuanHoa(n,mot);
   chuanHoa(n,hai);
   tinhTong(n,mot,nCong1);
   tinhTong(n,hai,nCong2);
   tinhTich(n,nCong1,tichNvsNcong1);
   tinhTich(tichNvsNcong1,nCong2,tichPhanTu);
   string quotient = divide(tichPhanTu, 6);
   cout<<quotient;
}
void tinhTich(char A[],char B[],char C[])
{
	strrev(A);
	strrev(B);
	int iA,iB;
	for(int i=0;i<strlen(A)+strlen(B);i++)
	   C[i]='0';
	for(iB=0;iB<strlen(B);iB++)
	   {
	   	   int nho=0;
	   	   for(iA=0;iA<strlen(A);iA++)
	   	       {
				  int x=(B[iB]-'0')*(A[iA]-'0')+nho+(C[iA+iB]-'0');
	   	          C[iA+iB]=x%10+'0';
	   	          nho=x/10;
	   	        }
	   	        if(nho>0)
	   	        C[iA+iB]=nho+'0';
	   	}
	if(C[iA+iB-1]!='0')
	   C[iA+iB]='\0';
	else 
	   C[iA+iB-1]='\0';
	strrev(C);
	} 
void xuat(char C[])
{
	for(int i=0;i<strlen(C);i++)
	    cout<<C[i];
	cout<<endl;
}
void tinhTong(char S1[],char S2[],char S[])
{
	strrev(S1);
	strrev(S2);
	int l=strlen(S1);
	int nho=0;
	for(int i=0;i<l;i++)
	    {
	    	int t=(S1[i]-'0')+(S2[i]-'0')+nho;
	    	if(t<10)
	    	   {
	    	   	   S[i]=t+'0';
	    	   	   nho=0;
	    	    }
	    	else
	    	  {
	    	  	S[i]=t-10+'0';
	    	  	nho=1;
	    	   }
	    }
	if(nho==1)
	   S[l++]='1';
	S[l]='\0';
	strrev(S);
	strrev(S1);
	strrev(S2);
}
void chuanHoa(char S1[],char S2[])
{
	int l1=strlen(S1);
	int l2=strlen(S2);
	if(l1>l2)
	{
		chen(S2,l1-l2);
	}
	else
		chen(S1,l2-l1);
}
void chen(char S[],int k)
{
	strrev(S);
	int l=strlen(S);
	for(int i=0;i<k;i++)
	   S[l+i]='0';
	S[l+k]='\0';
	strrev(S);
}
string divide(char dividend[], int divisor)
{
    string result;
    int index = 0;
    int temp = dividend[index] - '0'; 
    while (temp < divisor)
        temp = temp * 10 + (dividend[++index] - '0');
    while (strlen(dividend+index) > 0)
    {
        result += (temp / divisor) + '0'; 
        temp = (temp % divisor) * 10 + dividend[++index] - '0'; 
    }
    if (result.length() == 0) 
        return "0";
    return result;
}
