#include <stdio.h>

int main()
{
    int N,K;

    scanf("%d %d", &N, &K);

    if(N<K)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
