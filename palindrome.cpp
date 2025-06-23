#include <bits/stdc++.h>
using namespace std;

int palindrome_check(string s,int i)
{
    int n=s.size();
    if(i>=n/2)
    {
        return true;
    }
    if(s[i]!=s[n-i-1])
    {
        return false;
    }
    return true;
    palindrome_check(s,i+1);
}

int main()
{
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int res=palindrome_check(s,0);
    if(res==true)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not a palindrome";
    }
    return 0;
}
