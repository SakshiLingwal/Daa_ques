/*Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program
to find whether the given key element is present in the array or not. If present, then also find the number of copies of given key.
(Time Complexity = O(log n)).*/
#include <stdio.h>
void binary(int a[], int n, int key)
{
    int f = 0, low = 0, mid, high = n - 1, c = 0, m, l;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (key == a[mid])
        {
            f = 1;
            m = mid;
            break;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else if (key > a[mid])
        {
            low = mid + 1;
        }
    }
    if (f==0)
    {
        printf("Key not found\n");
        return;
    }
    else
    {
        low = mid - 1;
        high = mid + 1;
        c = 1;
        while (low >= 0 && a[low] == key)
        {
            c++;
            low--;
        }
        while (high < n && a[high] == key)
        {
            c++;
            high++;
        }
        printf("%d is found %d times ", key, c);
    }
}
int main()
{
    int a[10], n, i, key, c = 0, m, l;
    printf("Enter array limits :");
    scanf("%d", &n);
    printf("Enter the array elements :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter key to be searched :");
    scanf("%d", &key);
    binary(a, n, key);
    return 0;
}