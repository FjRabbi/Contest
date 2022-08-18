#include <stdio.h>
#include <stdint.h>

int main()
{
    int64_t A,B, Sum;
    int T,i;

    scanf("%d", &T);

    for(i=1; i<=T; i++)
    {
        scanf("%I64d %I64d", &A,&B);

        Sum = A+B;

        printf("Case %d:\n", i);
        printf("%I64d + %I64d = %I64d\n", A,B,Sum);
        printf("\n");
    }

    return 0;
}
