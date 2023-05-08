/*You have been given two sorted integer arrays of size m and n. Design an algorithm and implement it using a program to find list
of elements which are common to both. (Time Complexity = O(m+n))*/
#include<stdio.h>
int main()
{
    int a1[20],a2[20],i=0,j=0,m,n,f=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a1[i]);
    }
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }
    i=0;
    while(i<=m && j<=n)
    {
        if(a1[i]==a2[j])
        {
            printf("%d ",a1[i]);
            i++;
            j++;
        }
        else if(a1[i]<a2[j])
        {
            i++;
        }
        else
        {
            j++;
        }         
    }
    return 0;
}