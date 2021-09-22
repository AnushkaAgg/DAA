#include<iostream>
using namespace std;
int jump(int arr[],int n,int key,int *c)
{int j=0;
    for(int i=0;i<n;i=i+2)
    {
        if(arr[i]<=key && arr[i+2]<n && arr[i+2]>=key)
        {
            for(j=i;j<=(i+2);j++)
            {if(arr[j]==key)
            {*c=1;break;}
            }
            return j;
        }
    }
    return j;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
       int n,key;
       cin>>n; int arr[n];
       for(int i=0;i<n;i++)
       cin>>arr[i]; 
       cin>>key;
       int c=0;
       int turn=jump(arr,n,key,&c);
       if(c==1)
       cout<<"Present "<<turn;
       else
       cout<<"Not Present "<<turn;
        t--;
    }
}