#include <stdio.h>

int main()
{
    char str[110];
    int i, count=0;
    int n,j;

    scanf("%d", &n);

    for(j=1; j<=n; j++)
    {
        scanf("%s", str);

        count = strlen(str);

        if(count<=10)
        {
            printf("%s\n", str);
        }
        else
        {
            for(i=0; i<=count; i++)
            {
                if(i==count)
                {
                    printf("%c%d%c\n", str[0],count-2,str[i-1]);

                }
            }
        }
    }

    return 0;
}
