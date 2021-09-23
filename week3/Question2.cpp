#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int compare=0,shift=0;
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
       { if (arr[j] < arr[min_idx])
          min_idx = j;
          compare++;}
        swap(arr[min_idx], arr[i]);
        shift++;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
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
        selectionSort(arr, n);
        printArray(arr,n);
        cout<<"comparisons = "<<compare<<endl;
        cout<<"shifts = "<<shift<<endl;\
        t--;
    }
}