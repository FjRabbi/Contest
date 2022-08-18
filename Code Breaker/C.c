#include <stdio.h>

int main()
{
    int i,N,s;

    while(1)
    {
        scanf("%d", &N);

            s=1;

            if(N==0)
            {
                break;
            }
            else
            {
                for(i=2; i<=N; i++)
                {
                    s = ((i*i)+s);
                }

                printf("%d\n", s);
            }
    }

    return 0;
}
