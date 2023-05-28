#include<iostream>
#include<string.h>
using namespace std;
void tinhHieu(char S1[],char S2[],char S[]);
void tinhTruSoLonChoSoNho(char S1[],char S2[],char S[]);
void tinhTruSoLonChoSoNho(char S1[],char S2[],char S[]);
void chuanHoa(char S1[],char S2[]);
void chen(char S[],int k);
void chuanHoaHieu(char A[]);
void xoaKiTu(char A[],int vitrixoa);
int main()
{
	char A[200];
	char B[200];
	char C[200];
	cin>>A>>B>>C;
	char min[200];
	char minKQ[200];
	char minKQ1[200];
	char kqAB[200*200];
	char kqBC[200*200];
	chuanHoa(A,B);          //vd sau khi chuan hoa A=10 va B=2 thì nó se thành A=10,B=02
	tinhHieu(A,B,kqAB);      // sau khi tinh hieu A va B bi lat nguoc thanh A=01,B=20
	if(kqAB[0]=='-')    // A nho hon B
	   {
	   	  strrev(A);         // do da bi lat nguoc nen ta phai lat nguoc lai cho no ve dung dang cua no
	   	  chuanHoaHieu(A);     
	   	  for(int i=0;i<strlen(A);i++)
	   	      min[i]=A[i];
	   }
    else
       {
       	 strrev(B);
       	 chuanHoaHieu(B);
       	 for(int i=0;i<strlen(B);i++)
       	     min[i]=B[i];
       	}
    chuanHoa(min,C);
    tinhHieu(min,C,minKQ);
    if(minKQ[0]=='-')      //min<C
       {
       	  strrev(min);
       	  chuanHoaHieu(min);
       	  for(int i=0;i<strlen(min);i++)
       	     minKQ1[i]=min[i];
        }
    else
       {
       	strrev(C);
       	chuanHoaHieu(C);
       	for(int i=0;i<strlen(C);i++)
       	   minKQ1[i]=C[i];
       	}
    for(int i=0;i<strlen(minKQ1);i++)
         cout<<minKQ1[i]; 
}
void tinhHieu(char S1[],char S2[],char S[])
{
	if (strcmp(S1,S2)>=0)
	   tinhTruSoLonChoSoNho(S1,S2,S);
	else
	    {
		tinhTruSoLonChoSoNho(S2,S1,S);
	    int l=strlen(S);
	    strrev(S);
	    S[l]='-';
	    S[l+1]='\0';
	    strrev(S);
	    }
}
void tinhTruSoLonChoSoNho(char S1[],char S2[],char S[])
{
	strrev(S1);
	strrev(S2);
	int l=strlen(S1);
	int nho=0;
	for(int i=0;i<l;i++)
	    {
	    	int t=(S1[i]-'0')-(S2[i]-'0')-nho;
	    	if(t<0)
	    	   {
	    	   	   S[i]=t+10+'0';
	    	   	   nho=1;
	    	    }
	    	else
	    	  {
	    	  	S[i]=t+'0';
	    	  	nho=0;
	    	   }
	    }
	S[l]='\0';
	strrev(S);
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
void chuanHoaHieu(char A[])
{     
     while(A[0]=='0')
	      xoaKiTu(A,0);
}
void xoaKiTu(char A[],int vitrixoa)
{
	 int n=strlen(A);
   for(int i=vitrixoa;i<n-1;i++)
      A[i]=A[i+1];
	 A[strlen(A)-1]='\0';
}
