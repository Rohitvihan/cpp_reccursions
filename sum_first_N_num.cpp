#include<bits/stdc++.h>
using namespace std;
void sum_n(int n,int sum)
{
   if(n==0)
   {
       cout<<sum;
       return;
   }
   sum_n(n-1,sum+n);
}
int main()
{
    int n;
    cout<<"Enter the number n:";
    cin>>n;
    sum_n(n,0);
    return 0;
}
