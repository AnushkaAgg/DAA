#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void duplicate(int arr[], int n)
{
    int countArr[n + 1], i;
    for (i = 0; i <= n; i++)
        countArr[i] = 0;
    for (i = 0; i <= n; i++)
        countArr[arr[i]]++;
 
    bool a = false;
    for (i = 1; i <= n; i++) {
 
        if (countArr[i] > 1) {
            a = true;
        }
    }
    if (!a)
        cout << "NO";
    else
     cout<<"YES";
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        duplicate(arr, n-1);
        t--;
    }
}