#include<iostream>
#include<string.h>
#define SIZE 200
using namespace std;
int main()
{
   char S[SIZE];
   int cnt1=0;
   int cnt2=0;
   int cnt3=0;
   int cnt4=0;
   cin.getline(S,SIZE);
   int len=strlen(S);
   for(int i=0;i<len;i++)
     { if(S[i]>='a'&&S[i]<='z')
         cnt1++;
      else if(S[i]>='A'&&S[i]<='Z')
         cnt2++;
      else if(S[i]>='0'&&S[i]<='9')
         cnt3++;
      else 
         cnt4++;
      }
    cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<" "<<cnt4;
}
