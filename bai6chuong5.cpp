//F[0]=0,F[1]=1,F[2n]=F[n],F[2n+1]=F[n]+F[n+1]
//viet chuong trinh tim F[n]

#include<iostream>   //DEQUY
int cal(int n);
using namespace std;
int main()
{
	int n;
	cin>>n;
	int kq=cal(n);
	cout<<kq;
}
int cal(int n){
		if(n==0)return 1;
		if(n==1)return 1;
		if(n%2==0){
			return cal(n/2);
		}else{
			return cal(n/2) + cal(n/2+1);
		}
	}

/*   QHD
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int F[100000];
	F[0]=0;
	F[1]=1;
	int nTemp=2;
	while(nTemp<=n)
	{
		if(nTemp%2==0)
		  F[nTemp]=F[nTemp/2];
		else
		  F[nTemp]=F[nTemp/2]+F[(nTemp/2)+1];
		nTemp++;
	}
	cout<<F[n];
}
*/
