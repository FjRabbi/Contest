#include <stdio.h>

int main()
{
    int n, arr[2000000+1], count,i,j;
    arr[0]=0;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=1; i<=n; i++)
    {
        count = 0;
        for(j=1; j<=n; j++)
        {
            if(arr[i]<=arr[j])
            {
                count++;
            }
        }
        if(count == n)
        {
            printf("%d", arr[i]);
        }

    }
    printf("\n");

    return 0;
}

