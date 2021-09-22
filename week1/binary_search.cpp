#include<iostream>
using namespace std;
int binary(int arr[],int n,int key,int *c)
{
    int l=0,u=n-1,middle;int turn=0;
    while(l<=u)
    {
        middle=(l+u)/2;
        if(arr[middle]==key)
        {*c=1;return turn;}
        else{
            if(arr[middle]>key)
            {l=middle+1;turn++;}
            else
            {u=middle-1;turn++;}
        }
    }
    *c=0;
    return turn;
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
       int turn=binary(arr,n,key,&c);
       if(c==1)
       cout<<"Present "<<turn;
       else
       cout<<"Not Present "<<turn;
        t--;
    }
}