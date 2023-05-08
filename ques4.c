/*Given an unsorted array of integers, design an algorithm and implement it using a program to find whether two elements exist 
such that their sum is equal to the given key element. (Time  Complexity = O(n log n))*/
#include<stdio.h>
void partition(int a[],int lb,int ub)
{
    int pivot=a[lb],i=lb,j=ub,t=0;
    if(lb>ub)
    {
        return;
    }
    else 
    {
        while(i<j) 
        {
          while(pivot>=a[i])
          {
            i++;
          }
          while(pivot<a[j])
         {
            j--;
         }
         if(i<j)
         {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
         }
        }    
        a[lb]=a[j];
        a[j]=pivot;
        partition(a,lb,j-1); 
        partition(a,j+1,ub); 
    }
}
int main()
{
    int a[20],n,i,key,f=0;
    printf("Enter array limit :");
    scanf("%d",&n);
    printf("Enter array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    partition(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the key :");
    scanf("%d",&key);
    int left=0,right=n-1;
    while(left<right)
    {
        int sum=a[left]+a[right];
        if(sum==key)
        {
            f=1;
            break;
        }
        else if(sum>key)
            right--;
        else
            left++;
    }
    if(f==1)
        printf("%d + %d = %d",a[left],a[right],key);
    return 0;
}

