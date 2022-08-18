#include <stdio.h>

int main()
{
    int t,i,n,a,l1,l2;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);

        a = ((((((n*567)/9)+7492)*235)/47)-498);

        if(a<0)
        {
            a=-a;
        }

        l1 = (a/10);
        l2 = l1%10;

        printf("%d\n", l2);
        printf("%d\n", a);

    }

    return 0;

}
