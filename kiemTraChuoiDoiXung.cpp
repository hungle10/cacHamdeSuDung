#include<iostream>
#include<string.h>
using namespace std;
bool kiemTraDoiXung(char S[]);
int main()
{
	char S[100];
	gets(S);
	fflush(stdin);
	bool kq=kiemTraDoiXung(S);
	if(kq==true)
	   cout<<"Day la xau doi xung ";
	else
	   cout<<"Day khong phai la xau doi xung ";
}
bool kiemTraDoiXung(char S[])
{
	int len=strlen(S);
	for(int i=0;i<len;i++)
	    if(S[i]!=S[len-i-1])
	        return false;
	return true;
}
