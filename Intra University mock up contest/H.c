#include <stdio.h>

int main()
{
    unsigned long long int a,b,x;

    while(scanf("%lld %lld", &a,&b)!= EOF)
    {
        x = b-a;

        printf("%lld\n", x);
    }
    return 0;
}
