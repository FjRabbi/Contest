#include <stdio.h>

int main()
{
    int arr[3],j, i, count=0;

    for(i=0;i<3;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
    }

    if(count==0)
    {
        printf("Bad Triangle\n");
    }

    else if(count==1)
    {
        printf("Isosceles Triangle\n");
    }
    else if(count==3)
    {
        printf("Equilateral Triangle\n");
    }

    return 0;

}
