#include <stdio.h>

int main()
{
    int a,b;
    float c,d;

    int add, sub;
    float addf,subf;

    scanf("%d %d", &a,&b);
    scanf("%f %f", &c,&d);

    add=a+b;
    sub=a-b;

    addf=c+d;
    subf=c-d;

    printf("%d %d\n", add, sub);
    printf("%.1f %.1f\n", addf, subf);

        return 0;

}
