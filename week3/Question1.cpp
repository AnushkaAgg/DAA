#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int compare=0,shift=0;
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > key)
        {
           compare++;
            arr[j + 1] = arr[j];
            j = j - 1;
            shift++;
        }
        arr[j + 1] = key;
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
        insertionSort(arr, n);
        printArray(arr,n);
        cout<<"comparisons = "<<compare<<endl;
        cout<<"shifts = "<<shift<<endl;\
        t--;
    }
}