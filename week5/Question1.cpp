#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr, arr+n);
    int max_count = 0;
    int count = 1;
    char ans;
    for (int i = 1; i <= n; i++)
    {
        if ((i == n) || (arr[i] != arr[i - 1]))
        {
            if (max_count < count)
            {
                max_count = count;
                ans = arr[i - 1];
            }
            count = 1;
        }
        else
        {
            count++;
        }
    }
    if(max_count<=1)
    cout<<"No Duplicates Present"<<endl;
    else
    cout <<ans<<"-"<<max_count<<endl;
    T--;
    }
}