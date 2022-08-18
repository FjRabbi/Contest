#include <stdio.h>

int main()
{
    int n,i,sum=0;

    while (scanf("%d", &n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            sum+=i;
        }

        printf("%d\n",sum);
        sum = 0;
    }

    return 0;
}
