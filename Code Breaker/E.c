#include <stdio.h>

int main()

{
    int L,W,H,i,N;

    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        scanf("%d%d%d", &L,&W, &H);

        if(L<=20 && W<=20 && H<=20)
        {
            printf("Case %d: good\n", i);
        }
        else
        {
            printf("Case %d: bad\n", i);
        }
    }

    return 0;
}
