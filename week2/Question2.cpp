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
         unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            m[a]=i;
        }
       
     
       
        int i,j,k=-1,sum;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                sum=v[i]+v[j];
                if(m.find(sum)!=m.end())
                {
                   k=m[sum];
                   break;
                }
            }
            if(k!=-1)
                break;
        }
        if(k!=-1)
        cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
        else
        cout<<"No Sequence Found"<<endl;
        T--;

    }

}