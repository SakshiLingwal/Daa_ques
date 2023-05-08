/*II. Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices 
i, j, k such that arr[i] + arr[j] = arr[k] with time complexity O(n2log n) */
#include<stdio.h>
int main()
{
    int a[20],i,j,n,t,f,mid,low,high;
    printf("No. of test cases :");
    scanf("%d",&t);
    while(t)
    {
        printf("Enter array limit :");
        scanf("%d",&n);
        printf("Enter array elements :");
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<n;i++)
        {
         for(j=i+1;j<=n;j++)
         {
          f=0,low=j,high=n; 
          while(low<=high)
          {
            mid=(low+high)/2;
            if(a[i]+a[j]==a[mid])
            {
                f=1;
                break;
            }
            else if(a[i]+a[j]>a[mid])
                low=mid+1;
            else if(a[i]+a[j]<a[mid])
                high=mid-1;
          }
           if(f==1)
            printf("%d%d%d\n",i,j,mid);
          else
            printf("Sequence not found\n");
          }
        }
        t--;
    }
    return 0;
}

// Input:                            Output:
// 3                                 
// 5                                       No sequence found.
// 1 5 84 209 341                      
// 10                                       2, 7, 8
// 24 28 48 71 86 89 92 120 194 201
// 15                                      1, 6, 9  
// 64 69 82 95 99 107 113 141 171 350 369 400 511 590 666