#include <stdio.h>

int main()
{
    int n,k,i,j,count=0,s;


    scanf("%d%d",&n,&k);

    int a[n];
    a[0]=0;

    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    s = a[k];

    for(j=1; j<=n; j++)
    {
        if(a[j]>0)
        {
            if(a[j]>=s)
            {
                count++;
            }
        }
    }


    printf("%d\n",count);

    return 0;
}
