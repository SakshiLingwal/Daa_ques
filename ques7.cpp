//compare if two sorted array are same in O(n)
#include<bits/stdc++.h>
using namespace std;
int checkIfSame(int[],int,int[],int);
int main()
{
    int arr1[50],arr2[50],n,m;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter elements of arr1 in sorted order: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }  
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter elements of arr2 in sorted order: ";
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }  
    int f=checkIfSame(arr1,n,arr2,m);
    if(f==-1)
        cout<<"Arrays are not same";
    else
        cout<<"Arrays are same";
}
int checkIfSame(int a[],int n,int b[],int m)
{
    if(n!=m)
        return -1;
    for(int i=0,j=0;i<n;i++,j++)
    {
        if(a[i]!=b[j])
            return -1;
    }    
    return 1;
}