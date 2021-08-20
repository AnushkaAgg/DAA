#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t; // taking input of test case
    while(t>0)
    {
        int n,k,c=0,j;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cin>>k;
        for(j=0;j<n;j++)
        {
            if(arr[j]==k)
            {c=1;break;}
            else c=0;
        }
        if(c==1)
        cout<<"Present "<<j;
        else 
        cout<<"Not Present "<<j;
        t--;
    }

}