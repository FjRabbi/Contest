#include<stdio.h>
int main()
{
    int i,n,j,k,count=0,val;
    scanf("%d%d",&n,&k);
    int arr[n];
    arr[0]=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);

    }
    val=arr[k];
    for(j=1; j<=n; j++)
    {
        if(arr[j]>0)
        {
            if(arr[j]>=val)
            {
                count++;
            }
        }
    }

    printf("%d\n",count);

}
