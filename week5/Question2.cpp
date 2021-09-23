#include<iostream>
#include<bits/stdc++.h>
using namespace std;
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
        int target;
        cin>>target;
        sort(v.begin(), v.end());
        int start=0;
        int end=n-1;
        int c=0;
        while(start<end)
        {
            if((v[start]+v[end])==target)
            {
                c=1; 
                cout<<v[start]<<","<<v[end]<<",";
                end--;

            }
            else if((v[start]+v[end])>target)
            end--;
            else
            start++;
        }
        if(c==0)
        cout<<"No Such Pair Exist"<<endl;
        else
        cout<<endl;
        T--;
    }
    return 0;
}