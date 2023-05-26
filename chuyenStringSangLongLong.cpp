#include<bits/stdc++.h>
using namespace std;
long long stringToLongLong(string str);
int main()
{
	string cc;
	cin>>cc;
	long long kq=stringToLongLong(cc);
	cout<<kq;
}
long long stringToLongLong(string str)
{
    stringstream ss(str);
    int num;
    ss >> num;
    return num;
}
