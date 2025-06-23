#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    int left_fib=fibo(n-1);
    int right_fib=fibo(n-2);
    return left_fib+right_fib;
}
int main()
{
    int n;
    cin>>n;
    int res=fibo(n);
    cout<<"res:"<<res;
    return 0;
}
