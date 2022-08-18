#include <stdio.h>

int main()
{
    int i, avg, arr[6], sum=0;

    for(i=1; i<=6; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=1; i<=6; i++)
    {
        sum = sum + arr[i];
    }

    avg = sum/6;

    printf("%d\n", avg);

    return 0;
}
