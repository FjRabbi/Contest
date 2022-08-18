#include <stdio.h>

int main()
{
    int N,D,X,Y,A,B;

    scanf("%d %d", &N, &D);

    if (N%D==0)
    {
        B = D+2;
        X = N/B;
        Y = N/B;

        printf("Each gets = %d\n", X);
        printf("Raju gets = %d\n", Y);
    }
    else
    {
        B = D+2;
        X = N/B;
        A = N%B;
        Y = X+A;

        printf("Each gets = %d\n", X);
        printf("Raju gets = %d\n", Y);
    }

    return ;

}
