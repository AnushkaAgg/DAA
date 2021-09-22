#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define SIZE 1001
int heap[SIZE];
int heapsize;
void init()
{
    heapsize=0;
}
void push(int val)
{
    if(heapsize>=SIZE)
    {
        cout<<"overflow";
        return;
    }
    heap[heapsize]=val;
    int curr=heapsize;
    while(curr>0 && heap[(curr-1)/2]<heap[curr])
    {
        int temp=heap[(curr-1)/2];
        heap[(curr-1)/2]=heap[curr];
        heap[curr]=temp;
        curr=(curr-1)/2;
    }
    heapsize+=1;
}
int pop()
{
    if(heapsize<=0)
    {
        cout<<"underflow";
        return -1;
    }
    int curr=0;
    int popped=heap[0];
    heap[0]=heap[heapsize-1];
    heapsize-=1;
    while((2*curr+1)<heapsize)
    {
        int child;
        if((2*curr+1)==heapsize)
        child=2*curr+1;
        else{
            if((2*curr+1)>heapsize)
            child=2*curr+1;
            else
            child=2*curr+2;
        }
        if(heap[curr]<heap[child])
        {
            int temp=heap[curr];
            heap[curr]=heap[child];
            heap[child]=temp;
            curr=child;
        }
        else
        break;
    }
    return popped;
}
void show_heap()
{
    int l=0;
    while(l<heapsize)
    {
        cout<<heap[l]<<" ";
        l++;
    }
}
int main()
{
    init();
    while(1)
    {
        cout<<"1-PUSH , 2-POP, 3-DISPLAY, 4-TERMINATE\n";
        int option,val;
        cin>>option;
        switch(option)
        {
           case 1: cout<<"Enter  Element\n";
           cin>>val;
           push(val);
           break;
           case 2:cout<<"Popped "<<pop()<<endl;
           break;
           case 3:
           show_heap();
           break;
           default:
           return 0;
        }
    }
}