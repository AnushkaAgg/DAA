#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int found(vector<int> v,int key)
{
    int c=0;
    unordered_map<int,int> m;
    for(int i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }
    if(m.find(key)!=m.end())
    {
        c=m[key];
    }
    return c;
}
int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int n,a;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int key;
        cin>>key;
        int count=found(v,key);
        if(count==0)
        cout<<"Key Not Found"<<endl;
        else
        cout<<key<<"-"<<count<<endl;
        T--;
    }
    return 0;
}