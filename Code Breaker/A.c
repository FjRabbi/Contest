#include <stdio.h>

int main()
{
    int arr[1000], n, i, sum=0;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum+=arr[i];
    }

    printf("%d\n", sum);

    return 0;
}
