/*III. Given an array of non-negative integers, design an algorithm and a program to count the number of pairs of integers such that
their difference is equal to a given key. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],n,i,key,c,j,t;
    printf("Enter no. of test cases :");
    scanf("%d",&t);
    while(t)
    {
        printf("Enter array limit :");
        scanf("%d",&n);
        printf("Enter array elements :");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter key element :");
        scanf("%d",&key);
        c=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(abs(a[j]-a[i])==key)
                {
                    c++;
                }
            }
        }
        printf("%d\n",c);
        t--;
    }
    return 0;
}

