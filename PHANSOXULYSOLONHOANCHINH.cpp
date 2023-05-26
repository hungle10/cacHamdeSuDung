#include<bits/stdc++.h>
using namespace std;
struct PHANSO
{
	string tu,mau;
};


void nhapMang(PHANSO A[],int nA);
void xuat(PHANSO A[],int nA);
string tinhTong(string s1,string s2);
PHANSO tinhTong(PHANSO x, PHANSO y);
PHANSO tinhTongDSPS(PHANSO A[], int nA);
void xuat(PHANSO A[],int nA);
string tinhTong(string s1,string s2);
string tinhTich(string A,string B);
void daoNguoc(string &S);
void rutGon(PHANSO& x);
string chiaSoLon(string A,long long b);
void xoaSo0Dau(string &S);
long long UCLN(string x, string y);
long long stringToLongLong(string str);
void chuanHoa(string &S1,string &S2);
void chen(string &S,int k);
void tinhHieu(string S1,string S2,string &S);
void tinhTruSoLonChoSoNho(string S1,string S2,string &S);
void xoaSo0(string &S);


int main()
{
	PHANSO A[100];
	int nA;
	cin>>nA;
	nhapMang(A,nA);
	PHANSO kq=tinhTongDSPS(A,nA);
	rutGon(kq);
	cout<<kq.tu<<" "<<kq.mau;
    //xuat(A,nA);
	return 0;
}
void nhapMang(PHANSO A[],int nA)
{
	for(int i=0;i<nA;i++)
	   cin>>A[i].tu>>A[i].mau;
}
PHANSO tinhTong(PHANSO x, PHANSO y)
{
	PHANSO tong;
	tong.tu = tinhTong(tinhTich(x.tu,y.mau),tinhTich(y.tu,x.mau));
	tong.mau = tinhTich(x.mau,y.mau);
   rutGon(tong);
	return tong;
}
PHANSO tinhTongDSPS(PHANSO A[], int nA)
{
	PHANSO t = A[0];
	for (int i = 1; i < nA; i++)
		t = tinhTong(A[i], t);
	return t;
}
void xuat(PHANSO A[],int nA)
{
	for(int i=0;i<nA;i++)
	   {
	   cout<<A[i].tu<<"/"<<A[i].mau;
	cout<<endl;
       }
}
string tinhTong(string s1,string s2)
{
	string s="";
	int nho=0;
	while(s1.size()<s2.size())
	    s1="0"+s1;
	while(s2.size()<s1.size())
	    s2="0"+s2;
	int len=s1.size()-1;
	for(int i=len;i>=0;i--)
	  {
	  	int so=int(s1[i]-'0')+int(s2[i]-'0')+nho;
	  	s=char(so%10+'0')+s;
	  	nho=so/10;
	  }
	if(nho>0)
	  s=char(nho+'0')+s;
	return s;
}
string tinhTich(string A,string B)
{
	string C="";
	daoNguoc(A);
	daoNguoc(B);
	int iA,iB;
	for(int i=0;i<A.length()+B.length();i++)
	   C=C+'0';
	for(iB=0;iB<B.length();iB++)
	   {
	   	   int nho=0;
	   	   for(iA=0;iA<A.length();iA++)
	   	       {
				  int x=(B[iB]-'0')*(A[iA]-'0')+nho+(C[iA+iB]-'0');
	   	          C[iA+iB]=char(x%10+'0');
	   	          nho=x/10;
	   	        }
	   	        if(nho>0)
	   	        C[iA+iB]=char(nho+'0');
	   	}

	if(C[iA+iB-1]=='0')
	    C.erase(C.begin()+iA+iB-1);
    daoNguoc(C); 
	return C;
}
void daoNguoc(string &S)
{
	reverse(S.begin(),S.end());
}
void rutGon(PHANSO& x)
{
	long long uc = UCLN(x.tu, x.mau);
	x.tu = chiaSoLon(x.tu,uc);
	x.mau = chiaSoLon(x.mau,uc);
}
string chiaSoLon(string A,long long b)
{
	int n=0;
	int i=0;
	string KQ="";
	long long number=0;
	while(i<A.length())
	{
		number=number*10+int(A[i]-'0');
		KQ=KQ+char(number/b+'0');
		number=number%b;
		i++;
	}
	xoaSo0Dau(KQ);
	return KQ;
}
void xoaSo0Dau(string &S)
{
	while(S[0]=='0')
	{
		    S.erase(S.begin() + 0); 
	}
}
long long UCLN(string x, string y)
{
	if(x=="0")
	{
	long long res=stringToLongLong(y);
	return res;
	}
	if(y=="0")
	{
	long long res=stringToLongLong(x);
	return res;
	}
	chuanHoa(x,y);
	while (x.compare(y)!=0)
	{
		if (x.compare(y)>0) 
	    {
	    	string kq="";
	    	tinhHieu(x,y,kq);
	        x=kq;
	    }
		else
		 {
		 	string kq="";
			tinhHieu(y,x,kq);  
			y=kq;
		  }
		chuanHoa(x,y);
	} 
	long long res=stringToLongLong(x);
	return res;
}
long long stringToLongLong(string str)
{
    stringstream ss(str);
    int num;
    ss >> num;
    return num;
}
void chuanHoa(string &S1,string &S2)
{
	int l1=S1.length();
	int l2=S2.length();
	if(l1>l2)
	{
		chen(S2,l1-l2);
	}
	else
		chen(S1,l2-l1);
}
void chen(string &S,int k)
{
	int l=S.length();
	for(int i=0;i<k;i++)
	   S='0'+S;
}
void tinhHieu(string S1,string S2,string &S)
{
	if (S1.compare(S2)>=0)
	  {
	    tinhTruSoLonChoSoNho(S1,S2,S);
	   xoaSo0(S);
      }
	else
	    {
		tinhTruSoLonChoSoNho(S2,S1,S);
	    int l=S.length();
	    xoaSo0(S);
	    S='-'+S;
	    }
}
void tinhTruSoLonChoSoNho(string S1,string S2,string &S)
{
	daoNguoc(S1);
	daoNguoc(S2);
	int l=S1.length();
	int nho=0;
	for(int i=0;i<l;i++)
	    {
	    	int t=(S1[i]-'0')-(S2[i]-'0')-nho;
	    	if(t<0)
	    	   {
	    	   	   int temp=t+10;
	    	   	   S=S+char(temp+'0');
	    	   	   nho=1;
	    	    }
	    	else
	    	  {
	    	  	S=S+char(t+'0');
	    	  	nho=0;
	    	   }
	    }
	daoNguoc(S);
}
void xoaSo0(string &S)
{
 while(S[0]=='0'&&S.length()>1)
	        S.erase(S.begin()+0);
}
