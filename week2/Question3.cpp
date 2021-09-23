#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int diff(vector<int> v,int k)
{
    int n=v.size();
    int count = 0;
    sort(v.begin(),v.end());  // Sort array elements
 
    int l = 0;
    int r = 0;
    while(r < n)
    {
         if(v[r] - v[l] == k)
        {
              count++;
              l++;
              r++;
        }
         else if(v[r] - v[l] > k)
              l++;
         else // arr[r] - arr[l] < sum
              r++;
    }  
    return count;
}
int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n,a;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int k;
        cin>>k;
        cout<<diff(v,k)<<endl;
        T--;

    }
}
       