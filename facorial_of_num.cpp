#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
   if(n==0)
   {
       return 1;
   }
   return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int res;
    res=fact(n);
    cout<<res;
    return 0;
}
