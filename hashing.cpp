#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int hash_arry[12]={0};
    for(int i=0;i<n;i++)
    {
        hash_arry[arr[i]]+=1;
    }
    int query_size;
    cout<<"Enter the query:";
    cin>>query_size;
    for(int i=0;i<query_size;i++)
    {
        int num;
        cout<<"Enter the number:";
        cin>>num;
        cout<<hash_arry[num];
    }
    return 0;
}
